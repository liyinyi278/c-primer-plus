#include <stdio.h>

int main(void) {
  double x = 5.000001;

  if (x > 5) {
    printf("x is greater than 5\n");
  }

  printf("Please enter a number: ");
  if (scanf("%lf", &x) != 1) {
    printf("Invalid input\n");
  }

  if (5 == x) {
    printf("x is equal to 5\n");
  }

  return 0;
}