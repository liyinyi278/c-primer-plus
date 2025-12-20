#include <stdio.h>

long fibonacci(int n);

int main(void) {
  printf("fibonacci(0) = %ld\n", fibonacci(0));
  printf("fibonacci(1) = %ld\n", fibonacci(1));
  printf("fibonacci(2) = %ld\n", fibonacci(2));
  printf("fibonacci(3) = %ld\n", fibonacci(3));
  printf("fibonacci(4) = %ld\n", fibonacci(4));
  printf("fibonacci(5) = %ld\n", fibonacci(5));
  printf("fibonacci(6) = %ld\n", fibonacci(6));

  return 0;
}

long fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }

  int prev = 0;
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result += prev;
    prev = result - prev;
  }

  return result;
}