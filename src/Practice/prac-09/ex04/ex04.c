#include <stdio.h>

double harmonic_average(double num1, double num2);

int main(void) {
  printf("Harmonic average of 3.0 and 4.0 is %.2f\n",
         harmonic_average(3.0, 4.0));
  printf("Harmonic average of 5.0 and 6.0 is %.2f\n",
         harmonic_average(5.0, 6.0));
}

double harmonic_average(double num1, double num2) {
  return 2.0 / ((1.0 / num1) + (1.0 / num2));
}