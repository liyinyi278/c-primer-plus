#include <stdio.h>

int main(void) {
  int quack = 2;
  quack += 5;
  quack *= 10;
  quack -= 6;
  quack /= 8;
  quack %= 3;

  printf("%d\n", quack);
  return 0;
}