#include <stdio.h>
#define MESG "COMPUTER BYTES DOG"

int main(void) {
  int n = 0;

  while (n < 5)
    printf("%s\n", MESG);
    n++;        //n++没有包含在while循环中，因此while循环会一直执行，变成死循环
  printf("That's all.\n");

  return 0;
}