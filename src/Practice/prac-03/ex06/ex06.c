#include <stdio.h>

int main(void) {
    const double WATER_QUALITY = 3.0e-23;
    const int QUART_WEIGHT = 950;

    printf("\nPlease enter the weight of the water sample (in quarts): ");
    int weight;
    scanf("%d", &weight);

    double amount = (double)weight * QUART_WEIGHT / WATER_QUALITY;
    printf("\nThe amount of water is %e liters.\n", amount);

    return 0;

}