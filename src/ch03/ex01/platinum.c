#include <stdio.h>

int main(void)
{
    float weight, value;

    printf("Are you worth your weight in platinum?\n"); 
    printf("Let's check it out.\n"); 
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);

    /* 1 troy ounce = 31.1034768 grams */
    /* 1 ounce = 28.3495231 grams */
    /* 1 pound = 16 ounces */
    value = 1700.0 * weight * 16.0 / 31.1034768;

    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop, just sell yourself!\n");
    printf("eat more to maintain your value.\n");

    return 0;
}