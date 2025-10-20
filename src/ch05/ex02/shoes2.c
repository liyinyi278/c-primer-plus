#include <stdio.h>

int main(void) {
    const double ADJUST = 7.31;
    const double SCALE = 0.333;

    double shoe, foot;

    shoe = 3.0;
    printf("Shoe size (men's)    foot length\n");
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f\n", shoe, foot);
        shoe += 1.0;    
    }
    printf("If the shoe fits, wear it.\n");

    return 0;
}