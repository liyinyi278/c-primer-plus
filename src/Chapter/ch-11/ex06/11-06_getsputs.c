/*
    在读取字符串时，scanf()和转换说明%s只能读取一个单词。
    可是在程序中经常要读取一行输入，而不仅仅是一个单词。
    许多年前，gets()函数就用于处理这种情况。
*/

/*
    gets()函数读取整行输入，直到遇到换行符，然后丢弃换行符，
    储存其余字符，并在这些字符的末尾添加一个空字符使其成为一个C字符串。
    它经常和puts()函数配对使用，该函数用于显示字符串，并在末尾添加一个换行符。
*/

/* 
    测试数据：I want to learn about string theory!
*/

#include <stdio.h>

#define STLEN 81

int main(void) {
  char words[STLEN];

  puts("Enter a string, please:");

  /* 
    gets只所以在有些编译器会给出警告，是因为它不能防止缓冲区溢出（buffer overflow），
        即多余的字符超出了指定的目标空间。

        比如下例中：gets的唯一参数words，无法检查数组是否装得下输入行。

        如果这些多余的字符只是占用了尚未使用的内存，就不会立即出现问题。
        但如果它们擦写掉程序中的其他数据，会导致程序异常中止，或者还有其他情况。

        过去，有些人通过系统编程，利用gets()插入和运行一些破坏系统安全的代码。
        因此，gets()函数在C99标准中已被弃用，并且在C11之后的版本中已被删除。
        但大多数编译器为了能兼容以前的代码，仍然支持它。
   */
  gets(words);

  printf("Your string twice:\n");
  printf("%s\n", words);
  puts(words);
  puts("Done.\n");

  return 0;
}