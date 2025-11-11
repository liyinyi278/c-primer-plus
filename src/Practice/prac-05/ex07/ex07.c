#include <stdio.h>

double calc_cube(double num)
{
    return num * num * num;
}

int main(void)
{
    double num;

    printf("Enter a number: ");
    if(scanf("%lf", &num)!= 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    printf("The cube of %.2lf is %.2lf\n", num, calc_cube(num));
    
    return 0;
}