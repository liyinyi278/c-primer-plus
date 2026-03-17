/*
    程序功能：修改字符串

    测试数据：
      Me? You talkin' to me? Get outta here!
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define LIMIT 81  //定义输入缓冲区大小（包含终止符'\0'）

void ToUpper(char *str);
int PunctCount(const char *str);

int main(void) {
  char line[LIMIT] = {0};
  // char *find;

  puts("Please enter a line(max 80 characters):");
  // 分情况处理fgets没有成功读取的场景
  if(!fgets(line, LIMIT, stdin)){
    // 先检查是否是EOF（不是错误，只是输入结束）
    if(feof(stdin)){
      puts("EOF");
      return 0;
    }else if(ferror(stdin)){
      // 真正的I/O错误，用perror输出系统错误信息
      perror("Input error");
      return 1;
    }
  }

  // find = strchr(line, '\n');
  // if (find)
  //   *find = '\0';
  line[strcspn(line, "\n")] = '\0';

  ToUpper(line);
  puts(line);
  printf("That line has %d punctuation characters.\n", PunctCount(line));

  return 0;
}

void ToUpper(char *str) {
  while (*str) {
    *str = toupper((unsigned char)*str);
    str++;
  }
}

int PunctCount(const char *str) {
  int count = 0;
  while (*str) {
    if (ispunct((unsigned char)*str))
      count++;
    str++;
  }
  return count;
}