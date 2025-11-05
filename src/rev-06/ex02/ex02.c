#include <stdio.h>

int main(void) {
  int value;
  int count = 0;

  for (value = 36; value > 0; value /= 2) {
    printf("%3d", value);
    count++;
    if (count % 5 == 0)
      printf("\n");
  }
  printf("\n");

  return 0;
}
