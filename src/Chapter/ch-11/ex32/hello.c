/*
    程序功能：把命令行参数转换为数字

    测试数据： ./生成的可执行文件名 3
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, times;

  /*
    数字既能以字符串形式储存，也能以数值形式储存。

    命令行参数是以字符串形式储存的，所以需要使用 atoi()
        函数将其转换为数值形式。 

    如果字符串仅以整数开头，atoi()函数也能处理，它只把开头的整数转换为字符。

    如果字符串不是以整数开头，比如："what"，在我们的C实现中，atoi() 函数会返回0。
        但C标准规定，这种情况下的行为是未定义的。
        因此，使用有错误检测功能的strtol()函数会更安全。
  */
  if (argc < 2 || (times = atoi(argv[1])) < 1) {
    printf("Usage: %s positive-number\n", argv[0]);
  } else {
    for (i = 0; i < times; i++) {
      puts("Hello, good looking!");
    }
  }

  return 0;
}
