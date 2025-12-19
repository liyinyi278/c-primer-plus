#include <stdio.h>

#define ROWS 3
#define COLS 4

void sum_rows(int arr[][COLS], int rows);
void sum_cols(int[][COLS], int);
int sum2d(int (*arr)[COLS], int rows);

int main(void) {
  int junk[ROWS][COLS] = {
      {2, 4, 6, 8},
      {3, 5, 7, 9},
      {12, 10, 8, 6},
  };

  sum_rows(junk, ROWS);
  sum_cols(junk, ROWS);
  printf("Sum of all elements: %d\n", sum2d(junk, ROWS));

  return 0;
}

/* 
    以下函数的第一个方括号，表明这是一个数组指针，指向一个有COLS个整数的数组。
    第二个方括号表明这个数组有COLS个整数。

    一般而言，声明一个指向N维数组的指针时，只能省略最左边方括号中的值：
        int sum4d(int arr[][12][20][30], int rows);
    因为第1对方括号只用于表明这是一个指针，而其它方括号用于描述指针所指向数据对象的类型。
 */
void sum_rows(int arr[][COLS], int rows) {
  int i, j, sum;
  for (i = 0; i < rows; i++) {
    sum = 0;
    for (j = 0; j < COLS; j++) {
      sum += arr[i][j];
    }
    printf("Sum of row %d is %d\n", i, sum);
  }
  putchar('\n');
}

void sum_cols(int arr[][COLS], int rows) {
  int i, j, sum;
  for (i = 0; i < COLS; i++) {
    sum = 0;
    for (j = 0; j < rows; j++) {
      sum += arr[j][i];
    }
    printf("Sum of col %d is %d\n", i, sum);
  }
  putchar('\n');
}

int sum2d(int (*arr)[COLS], int rows) {
  int i, j, sum = 0;
  for (i = 0; i < rows; i++) {
    for (j = 0; j < COLS; j++) {
      sum += arr[i][j];
    }
  }
  return sum;
}