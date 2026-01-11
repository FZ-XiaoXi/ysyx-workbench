/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM_10

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"\\(", '('},         // (
  {"\\)", ')'},         // )
  {" +", TK_NOTYPE},    // spaces
  {"\\*", '*'},         // times
  {"\\/", '/'},         // div
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // minus
  {"==", TK_EQ},        // equal
  {"[0-9]+", TK_NUM_10},// number10
};

#define NR_REGEX ARRLEN(rules)
uint32_t eval(int p, int q);
bool check_parentheses(int p, int q);
static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
        
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if(rules[i].token_type!=TK_NOTYPE){
          tokens[nr_token].type=rules[i].token_type;
          strncpy(tokens[nr_token].str,substr_start,substr_len);
          tokens[nr_token].str[substr_len]='\0';
          nr_token++;
        }

        switch (rules[i].token_type) {
          //default: TODO();
        }


        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  
  return true;
}


word_t expr(char *e, bool *success) {

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  for(int i=0;i<nr_token;i++)printf("%s\n",tokens[i].str);
  printf("---%d---\n",eval(0,nr_token-1));;
  return 0;
}

uint32_t eval(int p, int q) {
  if (p > q) {
    /* Bad expression */
    assert(0);
  }
  else if (p == q) {
    //printf("CALC:%s>>>%d",tokens[p].str,atoi(tokens[p].str));
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    int count=0;
    int op=0;
    uint32_t val1,val2;
    for(int i=p;i<=q;i++){
      if(tokens[i].type=='(') count++;
      if(tokens[i].type==')') count--;
      if((tokens[i].type=='+' || tokens[i].type=='-')&&count==0) op=i;
      if((tokens[i].type=='*' || tokens[i].type=='/')&&count==0&&(tokens[op].type!='+' && tokens[op].type!='-')) op=i;
    }
    val1 = eval(p, op - 1);
    val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
    }
  }
}
// ( () () (  ()  ()  )  ) (  )
//         ------------
// ----------------------- ----
bool check_parentheses(int p, int q){
  int count=0,flag=0;
  for(int i=p;i<=q;i++){
    if(tokens[i].type=='('){
      break;
    }else{
      if(tokens[i].type==')'){
        printf("()ERROR1()\n");
        assert(0);
      }
    }
  }
  for(int i=q;i>=p;i--){
    if(tokens[i].type==')'){
      break;
    }else{
      if(tokens[i].type=='('){
        printf("()ERROR2()\n");
        assert(0);
      }
    }
  }
  if(tokens[p].type=='(' && tokens[q].type==')'){
    for(int i=p+1;i<=q-1;i++){
      if(tokens[i].type=='(') break;
      else if(tokens[i].type==')') flag=1;
    }
    for(int i=q-1;i>=p+1;i--){
      if(tokens[i].type==')') break;
      else if(tokens[i].type=='(')  flag=1;
    }
    count=0;
    for(int i=p+1;i<=q-1;i++){
      if(tokens[i].type=='(') count++;
      if(tokens[i].type==')') count--;
    }
    if(count==0&&flag==0) return true;
  }
  count=0;
  for(int i=p;i<=q;i++){
    if(tokens[i].type=='(') count++;
    if(tokens[i].type==')') count--;
  }
  if(count==0) return false;
  else{
    printf("()ERROR3()\n");
    assert(0);
  }
  return false;
}