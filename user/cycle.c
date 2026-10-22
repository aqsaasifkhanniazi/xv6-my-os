#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
  uint64 c1 = rdcycle();
  uint64 c2 = rdcycle();
  printf("RISC-V Cycle Reader\n");
  printf("By: Aqsa Asif Khan Niazi\n");
  printf("Cycles: %ld -> %ld\n", c1, c2);
  printf("Delta: %ld cycles\n", c2 - c1);
  exit(0);
}
