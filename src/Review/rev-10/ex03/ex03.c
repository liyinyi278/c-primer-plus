/* 下面的程序中，ref的地址是什么？ref + 1是什么意思？++ref指向什么？ */

/*
    ref的地址是什么:
        ref是一个数组名，保存的是一个常量地址，所以ref的地址就是数组的首地址。

    ref + 1是什么意思:
        ref + 1表示的是数组中第二个元素的地址。

    ++ref指向什么
        由于ref是数组名，保存的是一个常量地址，不可以变动，所以++ref是非法的。
*/

#include <stdio.h>

int main(void) {
  int ref[] = {8, 4, 0, 2};
  int *ptr;
  int index;

  //   ++ref;
  //   //由于ref是数组名，保存的是一个常量地址，不可以变动，所以++ref是非法的。

  for (index = 0, ptr = ref; index < 4; index++, ptr++) {
    printf("%d %d\n", ref[index], *ptr);
  }

  return 0;
}