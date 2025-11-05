#include <stdio.h>

int main() {
  const int ROWS = 4;
  const int COLS = 8;

  char print_char = '$';

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%c", print_char);
    }
    printf("\n");
  }
}