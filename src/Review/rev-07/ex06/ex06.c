/* 
    后缀的自增运算符，会先使用当前的值，然后再进行自增，
    因此以下程序中，switch语句中，会先使用i的值，
    匹配case，再将i进行自增。
    同时，由于switch语句的穿透性，case 0匹配后，会继续执行case 1和case 2的语句。
    因此，最终程序的输出为：
        fat hat cat Oh no!
        hat cat Oh no!
        cat Oh no!
*/

#include <stdio.h>

int main(void) {
  int i = 0;

  while (i < 3) {
    switch (i++) {
    case 0:
      printf("fat ");
    case 1:
      printf("hat ");
    case 2:
      printf("cat ");
    default:
      printf("Oh no!");
    }
    putchar('\n');
  }

  return 0;
}