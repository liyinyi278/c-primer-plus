/*
    过去通常用fgets()来代替gets()，fgets()函数稍微复杂些，在处理输入方面与gets()略有不同。
    C11标准新增的gets_s()函数也可代替gets()。
        该函数与gets()函数更接近，而且可以替换现有代码中的gets()。
        但是，它是stdio.h输入/输出函数系列中的可选扩展，
        所以支持C11的编译器也不一定支持gets_s()。
*/

/*
    fgets()函数专门设计用于处理文件输入，所以一般情况下可能不太好用。

    fgets()和gets()的区别：
        1、fgets()函数的第2个参数指明了读入字符的最大数量。
            如果该参数为n，那么fgets()将读入n-1个字符，或读到遇到的第一个换行符为止。
        2、如果fgets()读到一个换行符，会把它储存在字符串。
            这与gets()不同，gets()会丢弃换行符。
        3、fgets()函数的第3个参数指明要读入的文件。
            如果读入从键盘输入，则该参数为stdin。

    因为fgets()函数把换行符放在字符串的末尾，通常要与fputs()函数配对使用，
        除非该函数不在字符串末尾添加换行符。

    fputs()函数的第2个参数指明要写入的文件。
        如果写入到屏幕，则该参数为stdout。
*/

/* 
    测试数据：
        apple pie
        strawberry shortcake
*/

#include <stdio.h>

#define STLEN 14

int main(void) {
  char words[STLEN];
  
  /* 
    第1行输入，apple pie，比fgets()读入的整行输入短，因此，apple pie\n\0被储存在数组中。
    所以当puts()显示该字符串时又在末尾添加了换行符，因此apple pie后面有一行空行。
    因为fputs()不在字符串末尾添加换行符，所以并未打印出空行。
  */
  puts("Enter a string, please:");
  fgets(words, STLEN, stdin);

  printf("Your string twice (puts(), then fputs()):\n");
  puts(words);
  fputs(words, stdout);

  /* 
    第2行输入，strawberry shortcake，超过了大小的限制，所以fgets()只读入了13个字符，并把strawberry sh\0储存在数组中。
    再次提醒读者注意，puts()函数会在字符串末尾添加换行符，而fputs()函数不会。
  */
  puts("Enter another string, please:");
  fgets(words, STLEN, stdin);

  printf("Your string twice (puts(), then fputs()):\n");
  puts(words);
  fputs(words, stdout);

  puts("Done.");

  return 0;
}