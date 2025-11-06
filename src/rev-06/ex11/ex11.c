#include <stdio.h>

int main(void) {
  const int SIZE = 8;

  int by_twos[SIZE];
  int index;

  for (index = 0; index < SIZE; index++) {
    by_twos[index] = (index + 1) * 2;
  }

  for (index = 0; index < SIZE; index++) {
    printf("%d ", by_twos[index]);
  }

  printf("\n");

  return 0;
}

/*
    原始错误程序，用于对照：
{
#include <stdio.h>
#define SIZE 8
  int main(void) {
    int by_twos[SIZE];
    int index;
    for (index = 1; index <= SIZE; index++)
      by_twos[index] = 2 * index;
    for (index = 1; index <= SIZE; index++)
      printf("%d ", by_twos);
    printf("\n");
    return 0;
  }
}
*/