#include <stdio.h>

int main(void) {
  const int ITEMS = 8;

  int num[ITEMS];

  int i = 0;
  for (; i < ITEMS; i++) {
    num[i] = 1 << i;
  }

  i = 0;
  do {
    printf("%10d ", num[i]);
    i++;
    if (i % 4 == 0) {
      printf("\n");
    }
  } while (i < ITEMS);

  return 0;
}