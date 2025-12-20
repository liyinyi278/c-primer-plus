/* 
    C99新增了复合字面量（compound literal）。
        字面量是除符号常量外的常量。例如，5是int类型字面量。
        C99标准委员会认为，如果有代表数组和结构内容的复合字面量，在编程时会更方便。

    对于数组，复合字面量类似数组初始化列表，前面是用括号括起来的类型名。
        比如：(int [2]){10, 20}, 创建了一个匿名数组，包含两个int类型的元素，值为10和20。
        去掉声明中的数组名，留下的int [2]就是复合字面量的类型名。

    初始化复合字面量也可以省略大小，编译器会自动计算数组当前的元素个数。
        比如：(int []){10, 20}，编译器会自动推断出数组大小为2。

    因为复合字面量是匿名的，所以不能先创建然后再使用它，必须在创建的同时使用它。
    使用指针记录地址就是一种用法。
        比如：int *p = (int []){10, 20};，创建了一个匿名数组，并将它的地址赋给指针p。
        与有数组名的数组类似，复合字面量的类型名也代表首元素的地址，所以可以把它赋给指针。
    
    还可以把复合字面量作为实参，传递给带有匹配形参的函数。
        比如：int total = sum((int []){10, 20, 30}, 3);，调用sum函数，传递了一个复合字面量作为实参。
        第1个实参是内含3个int类型值的数组，和数组名类似，这同时也是该数组首元素的地址。
        这种用法的好处是，把信息传入函数前不必先创建数组，这是复合字面量的主要用途。
*/

#include <stdio.h>

#define COLS 4

int sum(const int arr[], int n);
int sum2d(const int arr[][COLS], int rows);

/* 
    变量命名中：
        sum：强调计算过程，明确表示这是一个累加操作的结果。
        total：强调整体结果，它表示一个完整的、最终的汇总值。
*/
int main(void) {
  int total1, total2, total3;
  int *pt1;
  int (*pt2)[COLS];

  pt1 = (int[2]){10, 20};
  pt2 = (int[2][COLS]){{1, 2, 3, -9}, {4, 5, 6, -8}};

  total1 = sum(pt1, 2);
  total2 = sum2d(pt2, 2);
  total3 = sum((int[]){4, 4, 4, 5, 5, 5}, 6);

  printf("total1 = %d\n", total1);
  printf("total2 = %d\n", total2);
  printf("total3 = %d\n", total3);

  return 0;
}

int sum(const int arr[], int n) {
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum += arr[i];
  return sum;
}

int sum2d(const int arr[][COLS], int rows) {
  int i, j, sum = 0;
  for (i = 0; i < rows; i++) {
    for (j = 0; j < COLS; j++)
      sum += arr[i][j];
  }
  return sum;
}
