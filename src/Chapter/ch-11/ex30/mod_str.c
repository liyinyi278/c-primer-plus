/*
    程序功能：修改字符串

    测试数据：
      Me? You talkin' to me? Get outta here!
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define LIMIT 81

void ToUpper(char *);
int PunctCount(const char *);

int main(void) {
  char line[LIMIT];
  char *find;

  puts("Please enter a line:");
  if(fgets(line, LIMIT, stdin)){
    perror("Input error");
    return 1;
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