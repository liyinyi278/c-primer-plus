#include <stdio.h>

int main(void)
{
    #define PI 3.14159

    float radius, area, circum;

    printf("What is the radius of your pizza? \n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference: %1.2f, area = %1.2f\n", circum, area);

    return 0;
}