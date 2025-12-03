#include <stdio.h>

int main(void) {
  int ch;
  int lower_chars = 0;
  int upper_chars = 0;

  while ((ch = getchar()) != EOF) {
    if (ch >= 'a' && ch <= 'z') {
      lower_chars++;
    } else if (ch >= 'A' && ch <= 'Z') {
      upper_chars++;
    }
  }

  printf("Lowercase: %d\n", lower_chars);
  printf("Uppercase: %d\n", upper_chars);

  return 0;
}
