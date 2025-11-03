#include <stdio.h>

int main(void) {
    char ch = 'a' - 1;

    while (ch++ < 'g') {
        printf("%c ", ch);
    }

    printf("\n");

    return 0;
}