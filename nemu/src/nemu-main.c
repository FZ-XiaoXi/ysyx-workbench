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

#include <common.h>
#include "monitor/sdb/sdb.h"
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
void test_args();
int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  test_args();
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
void test_args(){
  int res=0,count=0;
  uint32_t val;
  char s[65536]={};
  FILE* fp = fopen("/home/seaber/ysyx-workbench/nemu/tools/gen-expr/input","r");
  if(fp!=NULL){

    while(1){
      res=fscanf(fp,"%u %s\n",&val,s);
      if(res==EOF)break;
      if(res==2){
        count++;
        printf("Get[%d]!\t%u\t%s\n",count,val,s);
      }
    }
  }else{
    printf("No args tests.\n");
  }

}