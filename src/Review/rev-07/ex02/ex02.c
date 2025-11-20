/*
    根据下列描述的条件,分别构造一个表达式:
    a. number等于或大于90，但是小于100
    b. ch不是字符q或k
    c. number在1～9之间（包括1和9），但不是5
    d. number不在1~9之间
*/

#include <stdio.h>

int main() {
  int number = 95;
  char ch = 's';

  if (number >= 90 && number < 100) {
    printf("number = %2d: a. number等于或大于90，但是小于100\n", number);
  }

  if (ch != 'q' && ch != 'k') {
    printf("ch     = %2c: b. ch不是字符q或k\n", ch);
  }

  number = 6;
  if ((number >= 1 && number <= 9) && number != 5) {
    printf("number = %2d: c. number在1～9之间（包括1和9），但不是5\n", number);
  }

  number = 10;
  if (number < 1 || number > 9) {
    printf("number = %2d: d. number不在1~9之间\n", number);
  }

  return 0;
}