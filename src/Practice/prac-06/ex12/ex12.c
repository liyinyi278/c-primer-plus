#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int items;

  while (true) {
    printf("Enter the number of items(<= 0 to quit): ");
    if (scanf("%d", &items) != 1) {
      printf("Invalid input. Please enter an integer.\n");
    }

    if (items <= 0) {
      break;
    }

    double sum1 = 0.0;
    for (int i = 1; i < items; i++) {
      sum1 += 1.0 / i;
    }

    double sum2 = 0.0;
    double sign = 1.0;
    for (int i = 1; i < items; i++) {
      sum2 += sign * (1.0 / i);
      sign = -sign;
    }

    printf("Sum1 %d:%f\n", items, sum1);
    printf("Sum2 %d:%f\n", items, sum2);
  }
}