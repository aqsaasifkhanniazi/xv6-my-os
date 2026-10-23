#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(void){
  uint64 a=rdinstret(); uint64 b=rdinstret();
  printf("RISC-V Instruction Counter\n");
  printf("By: Aqsa Asif Khan Niazi\n");
  printf("Inst: %ld -> %ld Delta: %ld\n",a,b,b-a);
  for(volatile int i=0;i<100000;i++){}
  uint64 c=rdinstret();
  printf("After loop: %ld diff %ld\n",c,c-b);
  exit(0);
}
