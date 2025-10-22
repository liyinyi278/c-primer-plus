#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t int_size = sizeof(n);

    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), int_size);

    return 0;
}