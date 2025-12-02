#include <stdio.h>

int main(void) {
  int ch;
  int count = 0;

  while ((ch = getchar()) != EOF) {
    if (ch < 32) {
      if (ch == '\n') {
        printf("\\n %d\t", ch);
        putchar('\n');
        count = 0;
      } else if (ch == '\t') {
        printf("\\t %d\t", ch);
      } else {
        printf("^%c %d\t", ch + 64, ch);
      }
    } else {
      printf("%c %d\t", ch, ch);
    }

    if (ch != '\n') {
      ++count;
      if (count % 10 == 0) {
        putchar('\n');
        count = 0;
      }
    }
  }

  return 0;
}