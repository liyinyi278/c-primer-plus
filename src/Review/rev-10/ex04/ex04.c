/*
    在下面的代码中，*ptr和*(ptr + 2)的值分别是什么？
        a.
        int *ptr;
        int torf[2][2] = {12, 14, 16};
        ptr = torf[0];

        b.
        int *ptr;
        int fort[2][2] = {{12}, {14, 16}};
        ptr = fort[0];
*/

/* 
    *ptr 和 *(ptr + 2)在a和b中的区别，主要是数组初始化方式的不同造成的。
        a中，torf的所有元素分别是：12, 14, 16, 0;
        b中，fort的所有元素分别是：12, 0, 14, 16;

        因此，*ptr在a中是12，在b中是12；
        *(ptr + 2)在a中是16，在b中是14。
*/

#include <stdio.h>

int main(void) {
  int *ptr;
  int torf[2][2] = {12, 14, 16};
  ptr = torf[0];

  printf("a. *ptr = %d\n", *ptr);
  printf("a. *(ptr + 2) = %d\n", *(ptr + 2));

  int *ptr2;
  int fort[2][2] = {{12}, {14, 16}};
  ptr2 = fort[0];

  printf("b. *ptr2 = %d\n", *ptr2);
  printf("b. *(ptr2 + 2) = %d\n", *(ptr2 + 2));

  return 0;
}