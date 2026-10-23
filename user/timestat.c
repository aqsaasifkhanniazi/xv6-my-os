#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(void)
{
  uint64 t1 = rdtime();
  printf("CUSTOM RISC-V Time Reader\n");
  printf("By: Aqsa Asif Khan Niazi\n");
  printf("Time: %ld\n", t1);
  for(volatile int k=0;k<100000;k++){}
  uint64 t2 = rdtime();
  printf("After: %ld Diff: %ld\n", t2, t2-t1);
  exit(0);
}
