/* 
    C99标准新增了变长数组（variable-length array，VLA），
    允许使用变量表示数组的维度。

    变长数组有一些限制：
        1、必须是自动存储类别，不能使用static或extern等存储类别说明符；
        2、不能在声明中初始化它们。

    考虑到“栈溢出风险”，以及“编译器兼容性”等问题，C11把变长数组变成了可选特性。

    变长数组中的“变”，不是指可以修改已创建数组的大小。
    一旦创建了变长数组，它的大小则保持不变。
    这里的“变”指的是：在创建数组时，可以使用变量指定数组的维度。
*/

#include <stdio.h>

#define ROWS 3
#define COLS 4

int sum2d(int rows, int cols, int arr[rows][cols]);

int main(void) {
  int rs = 3;
  int cs = 10;
  int junk[ROWS][COLS] = {{2, 4, 6, 8}, {3, 5, 7, 9}, {12, 10, 8, 6}};
  int morejunk[ROWS - 1][COLS + 2] = {
      {20, 30, 40, 50, 60, 70},
      {5, 6, 7, 8, 9, 10},
  };

  int varr[rs][cs]; // 变长数组（VLA）

  /*
      原书中，i、j变量是在for语句外声明，这可能是为了兼容早期C版本。
      现代C版本，for语句中已经可以直接声明变量了。
   */
  for (int i = 0; i < rs; i++) {
    for (int j = 0; j < cs; j++) {
      varr[i][j] = i * j + j;
    }
  }

  /* 
    原书中为：  printf("3 * 5 array\n");
    应该是笔误，应该是：  printf("3 * 4 array\n");
  */
  printf("3 * 4 array\n");
  printf("Sum of elements = %d\n", sum2d(ROWS, COLS, junk));

  printf("2 * 6 array\n");
  printf("Sum of elements = %d\n", sum2d(ROWS - 1, COLS + 2, morejunk));

  printf("3 * 10 VLA\n");
  printf("Sum of elements = %d\n", sum2d(rs, cs, varr));

  return 0;
}

/* 
    需要注意，在函数定义的形参列表中声明的变长数组并未实际创建数组。
    和传统的语法类似，变长数组名实际上是一个指针。
    这说明带变长数组形参的函数实际上是在原始数组中处理数组，因此可以修改传入的数组。
*/
int sum2d(int rows, int cols, int arr[rows][cols]) {
  int sum = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum += arr[i][j];
    }
  }
  return sum;
}

/* 
    变长数组（VLA）的本质：数组的长度不是一个编译时的常量，而是一个运行时才能确定的变量。
*/

/* 
    C99/C11标准允许在声明变长数组时使用const变量。
    所以该数组的定义必须是声明在块中的自动存储类别数组。
*/