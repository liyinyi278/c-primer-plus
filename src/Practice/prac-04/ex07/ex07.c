#include <stdio.h>
#include <float.h>

int main(void)
{
    float float_num = 1.0/3.0;
    double double_num = 1.0/3.0;

    printf("\nfloat_num 6 digits = %.6f\n", float_num);
    printf("float_num 12 digits = %.12f\n", float_num);
    printf("float_num 16 digits = %.16f\n", float_num);

    printf("\ndouble_num 6 digits = %.6f\n", double_num);
    printf("double_num 12 digits = %.12f\n", double_num);
    printf("double_num 16 digits = %.16f\n", double_num);

    printf("\nFLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);

    return 0;

}
