#include <stdio.h>

int main(void) {
  char ch;

  while ((ch = getchar()) != '#') {
    if (ch == '\n') {
    } else {
      printf("Step 1\n");
      if (ch == 'c') {
      } else {
        if (ch == 'b') {
          break;
        } else {
          if (ch != 'h') {
            printf("Step 2\n");
          }
          printf("Step 3\n");
        }
      }
    }
  }

  printf("Done\n");
  return 0;
}