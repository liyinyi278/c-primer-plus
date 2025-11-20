#include <stdio.h>

int main(void) {
  char ch;

  printf("Enter text (# to terminate):\n");
  while ((ch = getchar()) != '#') {
    putchar(ch);
  }

  return 0;
}