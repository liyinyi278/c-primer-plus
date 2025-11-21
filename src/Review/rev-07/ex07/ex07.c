#include <stdio.h>

int main(void) {
  char ch;
  int low_ch = 0;
  int high_ch = 0;
  int other_ch = 0;

  printf("Enter a string of characters terminated by a #\n");
  while ((ch = getchar()) != '#') {
    if (ch >= 'a' && ch <= 'z') {
      low_ch++;
    } else if (ch >= 'A' && ch <= 'Z') {
      high_ch++;
    } else {
      other_ch++;
    }
  }

  printf("Lowercase: %d\n", low_ch);
  printf("Uppercase: %d\n", high_ch);
  printf("Other: %d\n", other_ch);

  return 0;
}
