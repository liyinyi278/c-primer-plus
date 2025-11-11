#include <stdio.h>

int main(void) {
  int x = 10;

  x--;
  printf("%d\n", x);

  int n = 10;
  int k = 3;
  int m = n % k;
  printf("%d\n", m);

  int q = 10;
  int b = 3;
  int a = 9;
  int p = q / b - a;
  printf("%d\n", p);

  int c = 1;
  int d = 2;
  x = (a + b) / (c * d);
  printf("%d\n", x);

  return 0;
}