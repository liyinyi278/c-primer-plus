#include <stdio.h>

void larger_of(double *x, double *y);

int main(void) {
  double x = 5.0, y = 3.0;
  double i = 6.9, j = 2.8;

  printf("\nOriginally\n");
  printf("x = %f, y = %f\n", x, y);
  printf("i = %f, j = %f\n", i, j);

  larger_of(&x, &y);
  larger_of(&i, &j);

  printf("\nAfter\n");
  printf("x = %f, y = %f\n", x, y);
  printf("i = %f, j = %f\n", i, j);
}

/* 当需要改变主调函数中的值时，形参一般要用指针传参 */
void larger_of(double *x, double *y) {
  if (*x > *y) {
    *y = *x;
  } else {
    *x = *y;
  }
}