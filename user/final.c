#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(void)
{
  printf("\n========================================\n");
  printf("OS Final - All 10 Modules\n");
  printf("By: Aqsa Asif Khan Niazi\n");
  printf("========================================\n");
  printf("[M1] Banner: OK at boot\n");
  printf("[M2+M3] proccount=%d getppid=%d\n", proccount(), getppid());
  printf("[M4] meminfo: free=%d used=%d\n", (int)freemem(), (int)usedmem());
  printf("[M5] diskinfo: freeblocks=%d usedblocks=%d\n", (int)freeblocks(), (int)usedblocks());
  printf("[M6] rdcycle=%d\n", (int)rdcycle());
  printf("[M7] rdinstret=%d\n", (int)rdinstret());
  printf("[M8] rdtime=%d\n", (int)rdtime());
  printf("[M9] SATP=%d\n", (int)satp());
  printf("[M10] scratch=%d\n", (int)scratch());
  printf("\nAll 10 Modules Integrated!\n");
  printf("========================================\n");
  exit(0);
}
