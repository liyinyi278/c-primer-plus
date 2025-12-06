#include <stdio.h>

char get_first(void);

int main(void) {
  printf("Enter a string: ");
  printf("%c\n", get_first());
}

char get_first(void) {
  int ch;

  ch = getchar();
  while (ch == ' ' || ch == '\n' || ch == '\t') {
    ch = getchar();
  }

  while (getchar() != '\n') {
    continue;
  }

  return ch;
}