#include <stdio.h>

int main(void) {
  {
    char ch;

    printf("Enter in a word ending with 'g': ");
    ch = getchar();

    while (ch != 'g') {
      printf("%c", ch);
      ch = getchar();
    }
    printf("\n");

    while (getchar() != '\n') {
      continue;
    }
  }

  {
    char ch;

    printf("Enter in a word ending with 'g': ");
    ch = getchar();

    while (ch != 'g') {
      printf("%c", ++ch);
      ch = getchar();
    }
    printf("\n");

    while (getchar() != '\n') {
      continue;
    }
  }

  {
    char ch;

    printf("Enter in a word ending with 'g': ");

    do {
      ch = getchar();
      printf("%c", ch);
    } while (ch != 'g');
    printf("\n");

    while (getchar() != '\n') {
      continue;
    }
  }

  {
    char ch;

    printf("Enter in a word ending with 'g': ");
    ch = getchar();

    for (ch = '$'; ch != 'g'; ch = getchar()) {
      printf("%c", ch);
    }
    printf("\n");

    while (getchar() != '\n') {
      continue;
    }
  }

  return 0;
}