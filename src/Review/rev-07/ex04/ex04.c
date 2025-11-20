/*
    下列个表达式的值是多少？
    a. 5 > 2
    b. 3 + 4 > 2 && 3 < 2
    c. x >= y || y > x
    d. d = 5 + ( 6 > 2)
    e. 'x' > 'T' ? 10 : 5
    f. x>y ? у>x : x>у
*/

#include <stdio.h>

int main() {
  int x = 3, y = 4;
  int d;

  printf("expr a: 5 > 2 --> %d\n", 5 > 2);
  printf("expr b: 3 + 4 > 2 && 3 < 2 --> %d\n", 3 + 4 > 2 && 3 < 2);
  printf("expr c: x >= y || y > x --> %d\n", x >= y || y > x);
  printf("expr d: d = 5 + ( 6 > 2) --> %d\n", d = 5 + (6 > 2)); // 5 + 1 = 6
  printf("expr e: 'X' > 'T' ? 10 : 5 --> %d\n", 'X' > 'T' ? 10 : 5);
  printf("expr f: x>y ? у>x : x>у --> %d\n", x > y ? y > x : x > y);

  return 0;
}