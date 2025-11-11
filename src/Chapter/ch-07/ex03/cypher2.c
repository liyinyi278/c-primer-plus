#include <ctype.h>
#include <stdio.h>

int main(void) {
  char ch;

  printf("Enter a string: ");
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      putchar(ch + 1);
    } else {
      putchar(ch);
    }
  }
  putchar(ch);

  return 0;
}