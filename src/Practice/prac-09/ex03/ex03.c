#include <stdio.h>

void print_chars(char ch, int column, int row);

int main(void) {
  print_chars('*', 10, 5);
  return 0;
}

void print_chars(char ch, int column, int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("%c", ch);
    }
    printf("\n");
  }
}