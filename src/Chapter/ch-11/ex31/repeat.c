/*
    程序功能：演示带参数的main()

    测试数据：repeat Resistance is futile
*/

/* 
    许多环境（包括UNIX和DOS）都允许用双引号把多个单词括起来形成一个参数。
        例如，在UNIX中，命令
            $ repeat "Resistance is futile" now
            将把"Resistance is futile"作为一个参数传递给argv[1]，把"now"赋给argv[2]。
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int count = 0;

  printf("The command line has %d arguments:\n", argc - 1);
  for (count = 1; count < argc; count++)
    printf("%d: %s\n", count, argv[count]);

  printf("\n");

  return 0;
}