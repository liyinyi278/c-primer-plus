#include <stdio.h>

/* 打印字符ch，共打印【j】行，每行打印【i】个字符。 */
void chline(char ch, int i, int j);

int main(void) {
  chline('*', 10, 5);
  return 0;
}

/*
    本题要求的函数中，打印字符ch，共打印【j】行，每行打印【i】个字符。
    要特别注意的是，一般默认前一个参数为行数，后一个参数为列数。
    但本题有所不同，因此要注意参数的顺序。
*/
void chline(char ch, int i, int j) {
  for (int k = 0; k < j; k++) {
    for (int m = 0; m < i; m++) {
      putchar(ch);
    }
    putchar('\n');
  }
}