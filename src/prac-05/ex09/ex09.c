#include <stdio.h>

void temperatures(const double celsius);

int main(void)
{
    double celsius;

    printf("Enter a temperature in Celsius:(q to quit) ");
   
    while (scanf("%lf", &celsius)) {
        temperatures(celsius);

        printf("Enter next temperature in Celsius(q to quit): ");
    }

}

void temperatures(const double celsius){
    double fahrenheit = 5.0/9.0 * (celsius + 32.0);
    double kelvin = fahrenheit + 273.16;

    printf("Celsius: %.2f\n", celsius);
    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);
    printf("\n");
}