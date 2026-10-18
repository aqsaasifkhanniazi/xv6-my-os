#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(){ int n=proccount(); printf("User: proccount=%d\n", n); exit(0); }
