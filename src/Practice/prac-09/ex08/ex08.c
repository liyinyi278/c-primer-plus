#include <stdio.h>

double power(double base, int exponent);

int main() {
  double base;
  int exponent;

  while (1) {
    printf("Enter base: ");
    while (scanf("%lf", &base) != 1) {
      printf("Invalid input. Please again enter the base: ");
      while (getchar() != '\n') {
      }
    }

    printf("Enter exponent: ");
    while (scanf("%d", &exponent) != 1) {
      printf("Invalid input. Please again enter the exponent: ");
      while (getchar() != '\n') {
      }
    }

    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    char choice;
    printf("Do you want to continue? (y/n): ");
    while (scanf(" %c", &choice) != 1) {
      printf("Invalid input. Please again enter your choice: ");
      while (getchar() != '\n') {
      }
    }

    if (choice == 'n' || choice == 'N') {
      break;
    }
  }

  return 0;
}

double power(double base, int exponent) {
  if (base == 0 && exponent == 0) {
    printf("Error: base and exponent cannot both be zero.\n");
    return 1.0;
  } else {
    if (base == 0) {
      return 0;
    }

    if (exponent == 0) {
      return 1.0;
    }
  }

  double result = 1.0;
  int i;

  if (exponent > 0) {
    for (i = 1; i <= exponent; i++) {
      result *= base;
    }
  } else {
    for (i = 1; i <= -exponent; i++) {
      result /= base;
    }
  }

  return result;
}