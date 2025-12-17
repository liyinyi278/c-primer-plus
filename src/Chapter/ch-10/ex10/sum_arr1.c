#include <stdio.h>

#define SIZE 10

int sum_arr(int arr[], int n);

/* 
    本程序中：
    main函数中打印的sizeof marbles的值是40，
    这是因为数组名marbles代表的数组的地址，
    而sizeof [数组名]，返回的是整个数组的大小，即40字节。

    但是在sum_arr函数中，arr作为函数的形式参数，虽然还是保存的是数组的首元素地址，
    但已经退化为了指针，所以sizeof arr的值是8字节，即指针的大小（不同系统可能有所不同）。
*/

int main(void) {
  int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  long sum = sum_arr(marbles, SIZE);

  printf("The total number of marbles is %ld.\n", sum);
  printf("The size of marbles is %zd bytes.\n", sizeof marbles);

  return 0;
}

int sum_arr(int arr[], int n) {
  int sum = 0, i;

  for (i = 0; i < n; i++) {
    sum += arr[i];
  }
  printf("The size of arr is %zd bytes.\n", sizeof arr);

  return sum;
}