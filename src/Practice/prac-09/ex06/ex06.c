#include <stdio.h>

void sort_nums(double *num1, double *num2, double *num3);

int main(void) {
  double num1 = 7.5, num2 = 2.3, num3 = 4.1;

  printf("Originally: %.2f %.2f %.2f\n", num1, num2, num3);

  sort_nums(&num1, &num2, &num3);

  printf("After: %.2f %.2f %.2f\n", num1, num2, num3);
}

/* 利用指针传参，对3个double类型的数进行正向排序。 */
void sort_nums(double *num1, double *num2, double *num3) {
  if (*num1 > *num2) {
    double temp = *num1;
    *num1 = *num2;
    *num2 = temp;
  }

  if (*num1 > *num3) {
    double temp = *num1;
    *num1 = *num3;
    *num3 = temp;
  }

  if (*num2 > *num3) {
    double temp = *num2;
    *num2 = *num3;
    *num3 = temp;
  }
}