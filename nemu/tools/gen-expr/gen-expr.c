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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
int buf_index=0;
static char buf[65536] = {'\0'};
static char code_buf[65536 + 1280] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdlib.h>\n"
"#include <signal.h>\n"
"#include <setjmp.h>\n"
"static jmp_buf env;"
"void handle_div_zero(int sig) {"
"    longjmp(env, 1);"
"}"
"int main() { "
"  signal(SIGFPE, handle_div_zero);"
"  if (setjmp(env) == 0) {"
"    unsigned result = %s; "
"    printf(\"%%u\\n\", result);"
"  } else {"
"    printf(\"xxxxxxxxxx\\n\");"
"  }"
"  return 0; "
"}";

uint32_t choose(uint32_t n){
  return rand()%n;
}
void gen_num(){
  buf[buf_index]=(char)(choose(10)+'0');
  buf_index++;
}
void gen(char c){
  buf[buf_index]=c;
  buf_index++;
}
void gen_rand_op(){
  switch (choose(4))
  {
  case 0:buf[buf_index]='+';break;
  case 1:buf[buf_index]='-';break;
  case 2:buf[buf_index]='*';break;
  default:buf[buf_index]='/';break;
  }
  buf_index++;
}

static void gen_rand_expr(int depth){
  if(depth>100){
    gen_num();
  }else{
    switch (choose(3)) {
      case 0: gen_num(); break;
      case 1: gen('('); gen_rand_expr(depth+1); gen(')'); break;
      default: gen_rand_expr(depth+1); gen_rand_op(depth+1); gen_rand_expr(depth+1); break;
    }
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  
  for (int i = 0; i < loop; i ++) {
    memset(buf, 0, sizeof(buf));
    buf_index=0;
    gen_rand_expr(0);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);
    int ret=system("rm -f /tmp/.expr");
    ret = system("gcc -O0 /tmp/.code.c -o /tmp/.expr");
    //if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    if(fp == NULL){
      i--;
      fprintf(stderr,"No file(/0)\n");
      continue;
    }
    int result;
    ret = fscanf(fp, "%d\n", &result);
    fprintf(stderr,"%d=",ret);
    if(ret<=0){
      fprintf(stderr,"XXXXX\n");
      i--;
      pclose(fp);
      continue;
    }else{
      printf("%u %s\n", result, buf);
    }   
    pclose(fp);
  }

  return 0;
}
