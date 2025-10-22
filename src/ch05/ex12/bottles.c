#include <stdio.h>

int main(void) {
  const int MAX = 100;

  int count = MAX + 1;

  while (--count > 0) {
    printf(
        "%d bottles of spring water on the wall, %d bottles of spring water!\n",
        count, count);
    printf("Take one down and pass it around,\n");
    printf("%d bottles of spring water on the wall!\n\n", count - 1);
  }

  return 0;
}