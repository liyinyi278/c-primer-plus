#include <stdio.h>

int main(void) {
    const double INCH_TO_CM = 2.54;
    double inch, cm;

    printf("\nEnter a length in inches: ");
    scanf("%lf", &inch);

    cm = inch * INCH_TO_CM;
    printf("\n%.2f inches = %.2f centimeters\n", inch, cm);

    return 0;
}