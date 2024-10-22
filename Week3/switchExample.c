#include <stdio.h>

int main(int argc, char *argv[]) {
    // convert argv[1] to int
    int n = 1;
    switch(n) {
        case 1:
            printf("You have selected option 1\n");
            break;
        case 2:
            printf("You have selected option 2\n");
            break;
        default:
            printf("Please select 1 or 2\n");
    }
}