#include <stdio.h>

int main(void) {
  char ch;

  int spaces = 0;
  int line_breaks = 0;
  int others = 0;

  printf("Enter a string of characters terminated by a #\n");
  while ((ch = getchar()) != '#') {
    if (ch == ' ') {
      spaces++;
    } else if (ch == '\n') {
      line_breaks++;
    } else {
      others++;
    }
  }

  printf("\nYour string contains:\n");
  printf("Spaces: %d\n", spaces);
  printf("Line breaks: %d\n", line_breaks);
  printf("Others: %d\n", others);

  return 0;
}