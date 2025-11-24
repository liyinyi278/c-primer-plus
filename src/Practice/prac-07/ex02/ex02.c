#include <stdio.h>

int main(void) {
  const int LINE_CHAR_LIMIT = 8;

  char ch;

  int count = 0;

  printf("Enter a string of characters, ending with a #\n");
  while ((ch = getchar()) != '#') {
    if (ch == '\n') {
      putchar(ch);
      count = 0;
      continue;
    }

    printf("%c = %d", ch, ch);

    ++count;
    putchar(0 == count % LINE_CHAR_LIMIT ? '\n' : '\t');
  }
  return 0;
}