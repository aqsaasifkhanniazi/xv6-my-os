#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(void)
{
  uint64 satp_val = misa();
  printf("RISC-V SATP & Memory Layout\n");
  printf("By: Aqsa Asif Khan Niazi\n");
  printf("SATP: %lx\n", satp_val);
  printf("MODE: %ld\n", satp_val >> 60);
  printf("ASID: %ld\n", (satp_val >> 44) & 0xFFFF);
  printf("PPN: %lx\n", satp_val & 0xFFFFFFFFFFF);
  printf("VM Enabled: %s\n", (satp_val>>60) ? "Yes Sv39" : "No Bare");
  exit(0);
}
