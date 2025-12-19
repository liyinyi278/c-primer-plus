#include <stdio.h>

void to_base_num(unsigned long num, int scale);

int main(void) {
  unsigned long num = 10;
  int scale1 = 2, scale2 = 8, scale3 = 16;

  printf("Number %lu in base %d is: ", num, scale1);
  to_base_num(num, scale1);
  printf("\n");

  printf("Number %lu in base %d is: ", num, scale2);
  to_base_num(num, scale2);
  printf("\n");

  printf("Number %lu in base %d is: ", num, scale3);
  to_base_num(num, scale3);
  printf("\n");

  return 0;
}

/* 
    num是要转换的数，scale是转换的进制
    利用递归实现。
*/
void to_base_num(unsigned long num, int scale) {
  if (!(scale == 2 || scale == 8 || scale == 16)) {
    printf("Invalid scale\n");
    return;
  }

  int remainder;

  remainder = num % scale;
  if (num >= scale) {
    to_base_num(num / scale, scale);
  }

  switch (scale) {
  case 2:
    printf("%d", remainder);
    break;
  case 8:
    printf("%o", remainder);
    break;
  case 16:
    printf("%x", remainder);
    break;
  }
}