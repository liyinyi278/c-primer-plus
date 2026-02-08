/*
    程序功能：演示strncmp函数的使用

    strcmp函数比较字符串中的字符，直到发现不同的字符为止，这一过程可能持续到字符串的末尾。
    而strncmp函数在比较两个字符串时，可以比较到字符不同的地方，也可以只比较第3个参数指定的字符数。
*/

#include <stdio.h>
#include <string.h>

#define LIST_SIZE 6

int main(void) {
  const char *list[LIST_SIZE] = {"astronomy", "astounding", "astrophysics",
                                 "ostracize", "asterism",   "astrophobia"};
  int count = 0;
  int i;

  for (i = 0; i < LIST_SIZE; i++) {
    if (strncmp(list[i], "astro", 5) == 0) {
      printf("Found:%s\n", list[i]);
      count++;
    }
  }

  printf("The list contained %d words beginning with astro.\n", count);

  return 0;
}
