#include <stdio.h>

#define ANSWER "Grant"
#define SIZE 40

char *s_gets(char *st, int n);

int main(void) {
  char try[SIZE];

  puts("Who is buried in Grant's tomb?");
  s_gets(try, SIZE);

  /* 
    由于ANSWER和try都是指针，所以try != ANSWER比较的是两个指针的值，即两个字符串的地址是否相同。
    而ANSWER和try储存在不同的内存位置，所以它们的地址不可能相同。
    因此，无论用户输入什么，程序都会提示 "No, that's wrong. Try again."

    如果要比较两个字符串的内容是否相同，应该使用strcmp等函数。
  */
  while (try != ANSWER) {
    puts("No, that's wrong. Try again.");
    s_gets(try, SIZE);
  }
  puts("That's right!");

  return 0;
}

char *s_gets(char *st, int n) {
  char *ret_val;
  int i = 0;

  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    while (st[i] != '\n' && st[i] != '\0')
      i++;
    if (st[i] == '\n')
      st[i] = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}