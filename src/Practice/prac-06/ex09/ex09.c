#include <stdio.h>

void fmt_print(float num1, float num2);

int main(void) {
  float num1, num2;

  printf("Enter two numbers(q to quit): ");
  while (scanf("%f %f", &num1, &num2) == 2) {
    fmt_print(num1, num2);
    printf("Enter two numbers(q to quit): ");
  }

  printf("Bye!\n");
  return 0;
}

void fmt_print(float num1, float num2) {
  printf("(num1 - num2) / (num1 * num2) = %f\n", (num1 - num2) / (num1 * num2));
}