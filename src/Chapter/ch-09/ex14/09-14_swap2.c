#include <stdio.h>

void inter_change(int u, int v);

int main(void) {
  int x = 5, y = 10;

  printf("Originally x = %d, y = %d\n", x, y);
  inter_change(x, y);
  printf("Now x = %d, y = %d\n", x, y);

  return 0;
}

void inter_change(int u, int v) {
  int temp;

  printf("Originally u = %d, v = %d\n", u, v);
  temp = u;
  u = v;
  v = temp;
  printf("Now u = %d, v = %d\n", u, v);
}