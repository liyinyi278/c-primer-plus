/*
    在下面的代码中，**ptr和**(ptr + 1)的值分别是什么？
        a.
        int (*ptr)[2];
        int torf[2][2] = {12, 14, 16};
        ptr = torf;

        b.
        int (*ptr)[2];
        int fort[2][2] = {{12}, {14, 16}};
        ptr = fort;
*/

/*
    **ptr 和 **(ptr + 2)在a和b中的区别，主要是数组初始化方式的不同造成的。
        a中，torf的所有元素分别是：12, 14, 16, 0;
        b中，fort的所有元素分别是：12, 0, 14, 16;

        因此，**ptr在a中是12，在b中是12；
        **(ptr + 2)在a中是16，在b中是14。
*/

/*
    和上题的区别在于：
        上题中，int *ptr; ptr = torf[0];
   ptr保存的是二维数组中，第一行的第一个元素的地址； 本题中，int (*ptr)[2]; ptr
   = torf; ptr保存的是二维数组中，第一行的地址。

    使用方法不同，但实际的效果是一样的。
*/

#include <stdio.h>

int main() {
  int (*ptr)[2];
  int torf[2][2] = {12, 14, 16};
  ptr = torf;

  printf("a. **ptr = %d\n", **ptr);
  printf("a. **(ptr + 2) = %d\n", **(ptr + 2));

  int fort[2][2] = {{12}, {14, 16}};
  ptr = fort;

  printf("b. **ptr = %d\n", **ptr);
  printf("b. **(ptr + 2) = %d\n", **(ptr + 2));

  return 0;
}