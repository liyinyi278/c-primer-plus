/* 
  可以使用自定义的字符串输入/输出函数来代替标准库函数。
*/

#include <stdio.h>

void put1(const char *string);

int main() {
  put1("Hello, world!\n");
  return 0;
}

void put1(const char *string) {
  /* 
    while (*string)：
      用于判断string是否指向一个非空字符，相当于while (*string != '\0')。
      此形式是C程序员常用的写法，应该熟练掌握。
   */
  while (*string) {
    putchar(*string++);
  }
}