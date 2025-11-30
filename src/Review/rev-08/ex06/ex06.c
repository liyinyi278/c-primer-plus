#include <stdio.h>

int main(void) {
  int ch = 0;

  printf("Enter a string ending with 'i': ");
  while ((ch = getchar()) != 'i') {
    putchar(ch);
  }

  while (getchar() != '\n') {
    continue;
  }
  putchar('\n');

  printf("Enter a string ending with '\\n': ");
  while ((ch = getchar()) != '\n') {
    putchar(ch++);
    putchar(++ch);
  }

  putchar('\n');

  return 0;
}