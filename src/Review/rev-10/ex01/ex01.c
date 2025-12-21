/* 下面的程序将打印什么内容？ */

/* 
    下面的程序，演示了使用数组表示法和指针表示法，两种方式打印数组 ref 的元素。
*/

#include <stdio.h>

int main(void) {
  int ref[] = {8, 4, 0, 2};
  int *ptr;
  int index;

  for (index = 0, ptr = ref; index < 4; index++, ptr++) {
    printf("%d %d\n", ref[index], *ptr);
  }

  return 0;
}