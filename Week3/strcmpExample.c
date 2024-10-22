#include <stdio.h>
#include <string.h>

int main() {
    char *str1 = "hello";
    char *str2 = "hello";
    char *str3 = "hi";
    char *str4 = "hello world";

    // ask what they think the following lines will print:
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str1, str3));
    printf("%d\n", strcmp(str1, str4));
}