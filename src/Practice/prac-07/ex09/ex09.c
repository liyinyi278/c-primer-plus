#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n);

int main(void) {
  int num = 0;

  printf("Enter a number to check prime length: ");
  if (scanf("%d", &num) != 1) {
    printf("Invalid input.\n");
    return 1;
  }

  int count = 0;
  for (int i = 1; i <= num; i++) {
    if (is_prime(i)) {
      printf("%d\t", i);
      ++count;
    }

    if (count % 5 == 0 && count != 0) {
      printf("\n");
      count = 0;
    }
  }
}

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  } else if (n == 2) {
    return true;
  } else if (n % 2 == 0) {
    return false;
  } else {
    int max_divisor = sqrt(n) + 1;
    for (int i = 3; i < max_divisor; i += 2) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
}