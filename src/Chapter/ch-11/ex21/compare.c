#include <stdio.h>
#include <string.h>

#define ANSWER "Grant"
#define SIZE 40

char *s_gets(char *st, int n);

int main(void) {
  char try[SIZE];

  puts("Who is buried in Grant's tomb?");
  s_gets(try, SIZE);

  /* 
    使用strcmp函数比较两个字符串的内容是否相同。

    如果两个字符串相同，strcmp函数返回0，否则返回非零值。

    strcmp函数比较的是字符串，不是整个数组，这是非常好的功能。
    虽然数组try占用了40字节，而储存在其中的“Grant”只占用了6字节（其中一个用来放空字符），
      strcmp函数只会比较try中第1个空字符前面的部分。
    
    所以，可以用strcmp函数比较储存在不同大小数组中的字符串。
  */
  while (strcmp(try, ANSWER)) {
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