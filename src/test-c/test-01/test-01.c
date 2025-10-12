#include <stdio.h>

int main(void) {
    int oct;
    int dec;

    printf("Enter an octal number: ");
    scanf("%i", &oct);

    // Convert octal to decimal
    dec = oct;

    printf("Decimal equivalent: %d\n", dec);

    return 0;
}