/*
    程序功能：演示使用strcpy函数复制字符串

    strcpy函数还有两个有用的属性。
        1、strcpy函数的返回类型是char*，是该函数返回的第1个参数的值，即一个字符的地址。
        2、第1个参数不必指向数组的开始，这个属性可用于拷贝数组的一部分。

    注意：
        strcpy函数把源字符串中的空字符也拷贝在内。
        在该例中，空字符覆盖了copy数组中that的第1个t。

        由于第1个参数是copy + 7，因此ps指向copy中的第8个元素（下标为7）。
            因此，puts(ps)从该处开始打印字符串。
*/

#include <stdio.h>
#include <string.h>

#define WORDS "beast"
#define SIZE 40

int main(void) {
  const char *orig = WORDS;
  char copy[SIZE] = "Be the best that you can be.";
  char *ps;

  puts(orig);
  puts(copy);

  ps = strcpy(copy + 7, orig);
  puts(copy);
  puts(ps);

  return 0;
}