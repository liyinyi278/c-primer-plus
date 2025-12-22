/* 
    C99 增加了一个新特性：指定初始化器（designated initializer）。
        利用该特性，可以初始化指定的数组元素，而不必初始化所有元素。

    初始化器的两个重要特性：
        1、如果指定初始化器后面有更多的值，比如：arr{[4] = 5, 6, 7}，
           那么这些值会被初始化到数组中紧随其后的元素。
           比如上例效果是：arr[4] = 5, arr[5] = 6, arr[6] = 7。
        2、如果再次初始化指定的元素，那么后面的初始化器会覆盖前面的初始化器。

*/

#include <stdio.h>

int main(void) {
  int arr1[] = {1, 2, 4, 8, 16, 32};

  printf("arr1[2] = %d\n", arr1[2]);
  putchar('\n');

  int arr2[100] = {[99] = -1};

  for (int i = 0; i < 100; i++) {
    printf("arr2[%02d] = %d\t", i, arr2[i]);

    if ((i + 1) % 5 == 0) {
      printf("\n");
    }
  }
  putchar('\n');

  int arr3[100] = {[5] = 101, [10] = 101, 101,101,[3] = 101};

  for (int i = 0; i < 100; i++) {
    printf("arr3[%02d] = %d\t", i, arr3[i]);

    if ((i + 1) % 5 == 0) {
      printf("\n");
    }
  }
  
  return 0;
}