#include <stdio.h>

int main(void)
{
    {
        int x = 0;
        while (++x < 3) {
            printf("%4d", x);        
        }
        printf("\n");
        printf("\n");
    }

    {
        int x = 100;
        while (x++ < 103) {
            printf("%4d\n", x);        
        }
        printf("%4d\n", x);    
        printf("\n");
    }

    {
        char ch = 's';
        while (ch < 'w') {
            printf("%c", ch); 
            ch++;
        }
        printf("%c\n", ch);        
        printf("\n");
    }

    return 0;
}