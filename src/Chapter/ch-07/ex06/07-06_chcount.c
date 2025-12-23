#include <stdio.h>

int main(void) {
  const char PERIOD = '.';

  char ch;
  int char_count = 0;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != PERIOD) {
    if (ch != '"' && ch != '\'') {
      char_count++;
    }
  }

  printf("There are %d non-quote characters.\n", char_count);

  return 0;
}