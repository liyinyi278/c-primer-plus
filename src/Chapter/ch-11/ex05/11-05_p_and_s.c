/*
    在讨论字符串时，或多或少会涉及到指针。

    实际上，字符串的绝大多数操作都是通过指针来完成的。

*/

#include <stdio.h>

int main(void) {
  const char *mesg = "Don't be a fool!";
  const char *copy;

  copy = mesg;
  printf("%s\n", copy);
  printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
  printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

  return 0;
}