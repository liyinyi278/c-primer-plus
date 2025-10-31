#include <stdio.h>

int main(void) {
  int n = 3;

  while (n++ < 3) {
    printf("n = %d\n", n);
  }

  printf("loop over n = %d.\n", n);

  return 0;
}