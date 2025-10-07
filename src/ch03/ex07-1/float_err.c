#include <stdio.h>

int main(void)
{
    float a,b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("\n\na = %f\n", a);

    printf("%zu\t%zu\t%zu\t%zu\n", sizeof(short), sizeof(int), sizeof(long),sizeof(long long));
    printf("%zu\t%zu\t%zu\n", sizeof(float), sizeof(double), sizeof(long double));
    return 0;

}