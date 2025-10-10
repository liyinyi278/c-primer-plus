#include <stdio.h>

int main(void) {
    float value = 0.0;
    printf("\nEnter a floating-point value: ");
    scanf("%f", &value);
    printf("\nfixed-point notation:%f\n", value);
    printf("exponential notation:%e\n", value);
    printf("p notation:%la\n", value);
    return 0;
}