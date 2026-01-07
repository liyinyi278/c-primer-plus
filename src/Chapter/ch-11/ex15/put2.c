#include <stdio.h>

int put2(const char *string);

int main(void) {
  printf("%d\n", put2("hello, world!"));
}

int put2(const char *string) {
  int count = 0;
  while (*string) {
    putchar(*string++);
    count++;
  }
  putchar('\n'); // 不统计换行符
  return count;
}