#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int ch;
  int words = 0;
  int letters = 0;

  while ((ch = getchar()) != EOF) {
    if (ch == ' ' || ch == '\n' || ch == '\t') {
      words++;
      while (true) {
        ch = getchar();
        if (ch == ' ' || ch == '\n' || ch == '\t') {
          continue;
        } else {
          break;
        }
      }

      ungetc(ch, stdin);
    } else {
      letters++;
    }
  }

  printf("The average number of letters per word is: %.2lf\n", letters * 1.0 / words);
  return 0;
}