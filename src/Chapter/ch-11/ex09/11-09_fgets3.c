/* 
  gets_s()与fgets()的区别如下：
    1、gets_s()只从标准输入中读取数据，所以不需要第3个参数。
    2、如果gets_s()读到换行符，会丢弃它而不是储存它。
    3、如果gets_s()读到最大字符数都没有读到换行符，会执行以下几步：
        a.首先把目标数组中的首字符设置为空字符，读取并丢弃随后的输入直到读到换行符或文件结尾。
        b.然后返回一个空指针。
        c.接着，调用依赖实现的“处理函数”（或你选择的其他函数），可能会中止或退出程序。

*/

/*
    测试数据：
        This
        program seems
        unwilling to accept long lines.
        But it doesn't get stuck on long
        lines either.
*/

#include <stdio.h>

#define STLEN 10


int main(void) {
  char words[STLEN];
  int i = 0;

  puts("Enter strings (empty line to quit):");

  while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
    while (words[i] != '\n' && words[i] != '\0')
      i++;

    if (words[i] == '\n')
      words[i] = '\0';
    else
      while (getchar() != '\n')
        continue;
    puts(words);
  }

  puts("Done.");

  return 0;
}