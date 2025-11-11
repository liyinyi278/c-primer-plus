#include <stdio.h>

int main(void) {
  const int ROWS = 6;

  char begin_char = 'F';

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c", begin_char - j);
    }
    printf("\n");
  }

  return 0;
}