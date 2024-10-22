#include <stdio.h>

// functions: printDemo, ptrDemo, ifDemo, forDemo, whileDemo, recursionDemo, arrDemo

void printDemo() {
    char *deptName = "CSCI";
    int classNum = 243;
    char sectionNum = '1';
    printf("You are enrolled in %s-%d-%c\n", deptName, classNum, sectionNum);
}

/// demonstrates dereferencing a ptr to change the its address' value
void ptrDemo() {
    int n = 5;
    printf("Before: %d\n", n);
    int *ptr = &n;
    *ptr = 10;
    printf("After: %d\n", n);
}

/// demonstrates basic if/else based on user input
void ifDemo() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
}

/// demonstrates basic for loop variant of "blast off" function
void forDemo() {
    int n;
    scanf("%d", n);
    for(n; n > 0; n--) {
        printf("%d\n", n);
    }
    printf("Blast off!\n");
}

/// demonstrates basic while loop variant of "blast off" function
void whileDemo() {
    int n;
    scanf("%d", n);
    while(n > 0) {
        printf("%d\n", n);
        n--;
    }
    printf("Blast off!\n");
}

/// demonstrates basic recursive variant of "blast off" function
void recursionDemo(int n) {
    // scanf called in main, passed in to function initially
    if(n <= 0) {
        printf("Blast off!\n");
    } else {
        printf("%d\n", n);
        recursionDemo(n - 1);
    }
}

/// file containing whiteboard coding functions for Week2B
int main() {
    // call any of the functions here:
    printDemo();
    return 0;
}