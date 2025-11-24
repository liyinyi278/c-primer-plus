#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int odds = 0;
  int evens = 0;
  int sum_odds = 0;
  int sum_evens = 0;
  int num = 0;

  while (true) {
    printf("Enter a number (0 to quit):\n");
    if (scanf("%d", &num) != 1) {
      printf("Invalid input, Please Enter int number.\n");
      continue;
      ;
    }

    if (num == 0) {
      break;
    }

    if (num % 2 == 0) {
      evens++;
      sum_evens += num;
    } else {
      odds++;
      sum_odds += num;
    }
  }

  printf("Odds: %d\n", odds);
  printf("Evens: %d\n", evens);
  printf("Sum of odds: %d\n", sum_odds);
  printf("Sum of evens: %d\n", sum_evens);

  return 0;
}