/*
    当初始化列表中的值少于数组元素个数时，编译器会把剩余的元素都初始化为0。
    也就是说,如果不初始化数组,数组元素和未初始化的普通变量一样,其中储存的都是垃圾值;
    但是,如果部分初始化数组,剩余的元素就会被初始化为0。
*/

#include <stdio.h>

#define SIZE 4

int main(void) {
  int some_data[SIZE] = {1492, 1066};
  int i;

  printf("%2s%14s\n", "i", "some_data[i]");

  for (i = 0; i < SIZE; i++) {
    printf("%2d%14d\n", i, some_data[i]);
  }

  return 0;
}