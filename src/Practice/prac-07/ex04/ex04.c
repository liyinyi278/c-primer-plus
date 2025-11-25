#include <stdio.h>

int main(void) {
  char ch;
  int replaces = 0;

  printf("Enter text to be encoded: ");
  printf("Type # to end input.\n");
  while ((ch = getchar()) != '#') {
    if ('.' == ch) {
      putchar('!');
      replaces++;
    } else if ('!' == ch) {
      putchar('!');
      putchar('!');
      replaces++;
    } else {
      putchar(ch);
    }
  }

  printf("\n\n%d replacements made.\n", replaces);
  return 0;
}