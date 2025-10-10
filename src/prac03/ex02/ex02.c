#include <stdio.h>

int main(void) {
    int ascii_code;

    printf("\nPlease enter a character ascii code: ");
    scanf("%d", &ascii_code);

    printf("\nThe character corresponding to the ascii code %d is %c\n", ascii_code, ascii_code);

    return 0;
}