#include <stdio.h>

double sum(double num1, double num2);

int main() {
  double num1, num2;

  printf("Enter two numbers: ");
  while (scanf("%lf %lf", &num1, &num2) != 2) {
    printf("Invalid input. Please enter two numbers: ");
    while (getchar() != '\n')
      ; // clear the input buffer
  }
  printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum(num1, num2));
}

double sum(double num1, double num2) { return num1 + num2; }