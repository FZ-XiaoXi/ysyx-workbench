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
uint32_t eval(int p, int q, bool *success);
bool check_parentheses(int p, int q,bool* success);
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

static Token tokens[65536] __attribute__((used)) = {};
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
        if(nr_token!=0){
          switch (tokens[nr_token-1].type) {
            case '-':
              if(nr_token!=1){
                if(!(tokens[nr_token-2].type==')' || tokens[nr_token-2].type==TK_NUM_10 || tokens[nr_token-2].type=='(')){
                  printf("Error expression '-'\n");
                  return false;
                }
              }
              break;
            case '+':
              //
              break;
            case '*':
              if(nr_token==1){
                printf("Error expression '*' 1\n");
                return false;
              }else if((tokens[nr_token-2].type!=')' && tokens[nr_token-2].type!=TK_NUM_10)){
                printf("Error expression '*' 2\n");
                return false;
              }
              break;
            case '/':
              if(nr_token==1){
                printf("Error expression '/' 1\n");
                return false;
              }else if((tokens[nr_token-2].type!=')' && tokens[nr_token-2].type!=TK_NUM_10)){
                printf("Error expression '/' 2\n");
                return false;
              }
              break;
            case TK_NUM_10:
              if(nr_token==2){
                if(tokens[0].type=='-'){
                  tokens[0].type=TK_NUM_10;
                  strncpy(tokens[0].str+1,substr_start,substr_len);
                  tokens[0].str[0]='-';
                  tokens[0].str[1+substr_len]='\0';
                  nr_token--;
                }
              }else if(nr_token>2){
                if(tokens[nr_token-2].type==')'){
                  printf("Error expression 'num'\n");
                  return false;
                }
                if(tokens[nr_token-2].type=='-' && tokens[nr_token-3].type=='('){
                  tokens[nr_token-2].type=TK_NUM_10;
                  strncpy(tokens[nr_token-2].str+1,substr_start,substr_len);
                  tokens[nr_token-2].str[0]='-';
                  tokens[nr_token-2].str[1+substr_len]='\0';
                  nr_token--;
                }
              }
              
              break;
            //default: TODO();
          }
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
  if(false==*success) return 0;
  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  
  return eval(0,nr_token-1,success);
}

uint32_t eval(int p, int q, bool *success) {
  if(false==*success) return 0;
  if (p > q) {
    /* Bad expression */
    printf("Bad expression\n");
    *success=false;
    return 0;
    //assert(0);
  }
  else if (p == q) {
    //printf("CALC:%s>>>%d",tokens[p].str,atoi(tokens[p].str));
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q,success) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1,success);
  }
  else {
    if(false==*success) return 0;
    int count=0;
    int op=0;
    uint32_t val1,val2;
    //0-5+(2+(2*9-(((5))))/((4/3))/(1+8)+0*0)
    //(2*9-(((5))))/((4/3))
    //(2*9-5)/((4/3))
    // 2*9-5)/((4/3)
    //    -----------------------------------
    //     (((5))))/((4/3)
    for(int i=p;i<=q;i++){
      printf("%s",tokens[i].str);
      if(tokens[i].type=='(') count++;
      if(tokens[i].type==')') count--;
      if((tokens[i].type=='+' || tokens[i].type=='-')&&count==0) op=i;
      if((tokens[i].type=='*' || tokens[i].type=='/')&&count==0&&(tokens[op].type!='+' && tokens[op].type!='-')) op=i;
    }
    
    val1 = eval(p, op - 1,success);
    val2 = eval(op + 1, q,success);
    printf("\n  %u %s %u\n",val1,tokens[op].str,val2);
    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: printf("Error OP: %d %s\n",tokens[op].type,tokens[op].str);*success=false;//assert(0);
    }
  }
  //printf("NULL address!\n");
  *success=false;
  return 0;
}
// ( () () (  ()  ()  )  ) (  )
//         ------------
// ----------------------- ----
bool check_parentheses(int p, int q,bool* success){
  if(false==*success) return 0;
  int count=0,flag=0;
  // for(int i=p;i<=q;i++){
  //   if(tokens[i].type=='('){
  //     break;
  //   }else{
  //     if(tokens[i].type==')'){
  //       *success=false;
  //       printf("()ERROR1()\n");
  //       return 0;
  //       //assert(0);
  //     }
  //   }
  // }
  // for(int i=q;i>=p;i--){
  //   if(tokens[i].type==')'){
  //     break;
  //   }else{
  //     if(tokens[i].type=='('){
  //       *success=false;
  //       printf("()ERROR2()\n");
  //       return 0;
  //       //assert(0);
  //     }
  //   }
  // }
  if(tokens[p].type=='(' && tokens[q].type==')'){
    // for(int i=p+1;i<=q-1;i++){
    //   if(tokens[i].type=='(') break;
    //   else if(tokens[i].type==')') flag=1;
    // }
    // for(int i=q-1;i>=p+1;i--){
    //   if(tokens[i].type==')') break;
    //   else if(tokens[i].type=='(')  flag=1;
    // }
    count=0;
    for(int i=p+1;i<=q-1;i++){
      if(tokens[i].type=='(') count++;
      if(tokens[i].type==')') count--;
      if(count<0) break;
    }
    if(count==0&&flag==0) return true;
  }
  count=0;
  for(int i=p;i<=q;i++){
    if(tokens[i].type=='(') count++;
    if(tokens[i].type==')') count--;
    if(count<0){
      *success=false;
      printf("()ERROR!()\n");
      return false;
    }
  }
  if(count==0) return false;
  else{
    *success=false;
    printf("()ERROR3()\n");
    return false;
    //assert(0);
  }
  return false;
}