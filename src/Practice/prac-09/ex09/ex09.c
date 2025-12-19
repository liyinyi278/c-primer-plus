#include <stdio.h>

double power_recursive(double base, int exponent);

int main(void) {
  double base1 = 2.0, base2 = 0.0, base3 = -2.0, base4 = 2.0, base5 = 0,
         base6 = 2.0;
  int exponent1 = 3, exponent2 = 0, exponent3 = -3, exponent4 = -3,
      exponent5 = 3, exponent6 = 0;

  printf("Base1 = %.2f, Exponent = %d, The result is %f\n", base1, exponent1,
         power_recursive(base1, exponent1));
  printf("Base2 = %.2f, Exponent = %d, The result is %f\n", base2, exponent2,
         power_recursive(base2, exponent2));
  printf("Base3 = %.2f, Exponent = %d, The result is %f\n", base3, exponent3,
         power_recursive(base3, exponent3));
  printf("Base4 = %.2f, Exponent = %d, The result is %f\n", base4, exponent4,
         power_recursive(base4, exponent4));
  printf("Base5 = %.2f, Exponent = %d, The result is %f\n", base5, exponent5,
         power_recursive(base5, exponent5));
  printf("Base6 = %.2f, Exponent = %d, The result is %f\n", base6, exponent6,
         power_recursive(base6, exponent6));

  return 0;
}

double power_recursive(double base, int exponent) {
  if (0 == base && 0 == exponent) {
    return 1;
  } else {
    if (0 == base) {
      return 0;
    }

    if (0 == exponent) {
      return 1;
    }
  }

  if (exponent < 0) {
    return 1 / (base * power_recursive(base, -exponent - 1));
  } else {
    return base * power_recursive(base, exponent - 1);
  }
}