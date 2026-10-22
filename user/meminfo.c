#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  uint64 free = freemem();
  uint64 used = usedmem();
  printf("Physical Memory Monitor\n");
  printf("By: Aqsa Asif Khan Niazi\n");
  printf("Free Memory: %ld bytes (%ld KB)\n", free, free/1024);
  printf("Used Memory: %ld bytes (%ld KB)\n", used, used/1024);
  printf("Total: %ld KB\n", (free+used)/1024);
 exit(0);
}
