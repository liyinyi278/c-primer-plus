#include <stdio.h>
#include <string.h>

int main(void) {
  const int MAX_STR_LEN = 255;

  char str[MAX_STR_LEN];
  char ch;
  int i = 0;

  printf("Enter a string: ");
  while ((ch = getchar()) != '\n' && i < MAX_STR_LEN - 1) {
    str[i++] = ch;
  }
  str[i] = '\0';

  int len = strlen(str);
  printf("Reversed string: ");
  for (int j = len - 1; j >= 0; j--) {
    printf("%c", str[j]);
  }
  printf("\n");

  return 0;
}