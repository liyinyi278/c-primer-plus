#include <stdio.h>

int main(void) {
  char small_letters[26];

  for (int i = 0; i < 26; i++) {
    small_letters[i] = 'a' + i;
  }

  printf("Small letters:\n");
  for (int i = 0; i < 26; i++) {
    printf("%c ", small_letters[i]);
    if ((i + 1) % 5 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}