#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void dummy_func(void) {}

int main(void)
{
  uint64 sp, fp, ra;
  uint64 scr = scratch();
  asm volatile("mv %0, sp" : "=r"(sp));
  asm volatile("mv %0, fp" : "=r"(fp));
  asm volatile("mv %0, ra" : "=r"(ra));

  printf("================================\n");
  printf("RISC-V Stack & Trap Inspector\n");
  printf("By: Aqsa Asif Khan Niazi\n");
  printf("================================\n");
  printf("sscratch (trap frame): 0x%lx\n", scr);
  printf("sp (stack pointer):    0x%lx\n", sp);
  printf("fp (frame pointer):    0x%lx\n", fp);
  printf("ra (return address):   0x%lx\n", ra);
  printf("Stack Growth: High -> Low\n");
  printf("Current Stack Top: 0x%lx\n", sp);
  printf("Status: Active\n");
  exit(0);
}
