/*
    puts()函数遇到空字符时就停止输出，所以必须确保有空字符。
        此程序就有问题，不要模仿。
*/

#include <stdio.h>

int main(void) {
  char side_a[] = "Side A";
  char dont[] = {'W', 'O', 'W', '!'};   //应该在dont[]尾元素中添加一个空字符。
  char side_b[] = "Side B";

  puts(side_a);
  puts(dont); // dont不是一个字符串。
  puts(side_b);

  return 0;
}