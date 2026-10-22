#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    printf("Free blocks: %ld\n", freeblocks());
    printf("Used blocks: %ld\n", usedblocks());
    exit(0);
}
