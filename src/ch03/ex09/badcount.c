#include <stdio.h>

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m); // error: too many arguments for format
    printf("%d %d %d\n", n); // error: missing arguments for format
    printf("%d %d\n", f, g); // error: missing arguments for format

    return 0;
}