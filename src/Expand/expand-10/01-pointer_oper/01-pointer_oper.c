/*
    本程序，演示通过二级指针，绕过数据的const限制，修改数据。

    此操作是未定义、且危险的，不推荐使用。
*/

#include <stdio.h>

int main() {
  const int a = 10;
  int *p;
  int **pp = &p;

  *pp = &a;
  *p = 20;

  printf("a = %d\n", a);

  return 0;
}