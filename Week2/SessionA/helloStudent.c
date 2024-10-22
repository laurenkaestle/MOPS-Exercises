#include <stdio.h>

/// simple program to print a name given as command line input
int main(int argc, char *argv[]) {
    if(argc != 2) {
        return 1;
    }
    printf("Hello %s!\n", argv[1]);
    return 0;
}