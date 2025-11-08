#include <stdio.h>

int main(void) {
  const int ROWS = 5;

  char ch = '$';

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c", ch);
    }
    printf("\n");
  }

  return 0;
}