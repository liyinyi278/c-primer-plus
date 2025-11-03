#include <stdio.h>

int main(void) {
  int x = 0;

  x += 10;
  printf("%d\n", x);

  x++;
  printf("%d\n", x);

  int a = 10;
  int b = 20;
  int c = 0;

  c = (a + b) * 2;
  printf("%d\n", c);

  c = a * 2 + b * 2;
  printf("%d\n", c);

  return 0;
}