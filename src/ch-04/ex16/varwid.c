#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("\nEnter a field width: ");
    scanf("%u", &width);
    printf("\nThe number is :%*d:\n", width, number);

    printf("\nNow enter a width and a precision:\n");
    scanf("%u %u", &width, &precision);
    printf("Weight = :%*.*f:\n", width, precision, weight);

    printf("Done!\n");

    return 0;
}