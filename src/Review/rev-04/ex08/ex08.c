#include <stdio.h>

int main(void) {
    int int1 = 527;
    int int2 = 63;
    int width = 4;
    char char1 = 'A';
    float float1 = 3.13;
    char str[] = "Hello World!";

    printf("int1: :%6.4d:\n", int1);
    printf("int2: :%*o:\n", width, int2);
    printf("char1: :%2c:\n", char1);
    printf("float1: :%+g:\n", float1);
    printf("str: :%-7.5s:\n", str);

    return 0;
}