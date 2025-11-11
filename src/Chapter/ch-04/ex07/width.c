#include <stdio.h>

int main(void)
{
    const int PAGES = 959;

    printf("\n");
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}