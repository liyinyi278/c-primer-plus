#include <stdio.h>

long square(int x);

int main(void)
{
    int x = 5;
    printf("Square of %d is %ld\n", x, square(x));
    return 0;
}

long square(int x)
{
    return x * x;
}