#include <stdio.h>

int main(void) {
  const int ROWS = 6;

  char begin_char = 'A';

  for (int i = 1; i <= ROWS; i++) {
    for (int j = 0; j < i; j++) {
      printf("%c ", begin_char + (i - 1) * i / 2 + j);
    }
    printf("\n");
  }

  return 0;
}