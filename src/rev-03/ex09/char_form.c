#include <stdio.h>

int main(void)
{
    char ch;

    printf("\n");

    ch = '\r';
    printf("ch = '\\r'\n");
    printf("ch = %c: character\n", ch);
    printf("ch = %d: decimal\n", ch);
    printf("\n");
    
    ch = 13;
    printf("ch = 13\n");
    printf("ch = %c: character\n", ch);
    printf("ch = %d: decimal\n", ch);
    printf("\n");

    ch = 015;
    printf("ch = 015\n");
    printf("ch = %c: character\n", ch);
    printf("ch = %d: decimal\n", ch);
    printf("\n");

    ch = 0xd;
    printf("ch = 0xd\n");
    printf("ch = %c: character\n", ch);
    printf("ch = %d: decimal\n", ch);
    printf("\n");

    return 0;
}