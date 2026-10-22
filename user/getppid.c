#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("My PID: %d Parent PID: %d\n", getpid(), getppid());
  exit(0);
}
