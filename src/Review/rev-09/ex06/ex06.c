#include <stdio.h>

void alter(int *a, int *b);

int main() {
  int a = 5, b = 3;

  printf("Originally:");
  printf("a = %d, b = %d\n", a, b);

  alter(&a, &b);

  printf("After alter():");
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void alter(int *a, int *b) {
  int sum = *a + *b;
  int diff = *a - *b;
  *a = sum;
  *b = diff;
}