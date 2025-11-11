#include <stdio.h>


int main(void) {
  double number;

  printf("Enter a number: ");
  if (scanf("%lf", &number) != 1) {
    printf("Invalid input\n");
    return 1;
  }

  printf("%.1lf\n", number);
  printf("%.1e\n", number);

  printf("%.3lf\n", number);
  printf("%.3e\n", number);

  return 0;
}