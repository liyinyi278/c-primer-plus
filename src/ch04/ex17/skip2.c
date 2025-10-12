#include <stdio.h>

int main(void)
{
    int n;

    printf("\nPlease enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer is %d\n", n);

    char ch;
    printf("\nPlease enter a characters:\n");
    scanf(" %c", &ch);
    printf("The last character is %c\n", ch);

    return 0;

}