/* 
    puts()函数，只需要把字符串的地址作为参数传递给它即可使用。
*/

#include <stdio.h>

#define DEF "I am a #defined string."

int main(void) {
  char str1[80] = "An array was initialized to me.";
  const char *str2 = "A pointer was initialized to me.";

  puts("I'm an argument to puts().");
  puts(DEF);
  puts(str1);
  puts(str2);
  puts(&str1[5]);
  puts(str2 + 4);

  return 0;
}