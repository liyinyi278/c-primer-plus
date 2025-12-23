#include <stdio.h>

/*
    多维数组名本质上是一个特殊的指针，但它不是普通的指针变量。而是一个“指向数组的指针”。
    比如下例中：
        zippo[4][2]中，zippo是数组名，类型是int(*)[2]（指向“包含2个int的一维数组”的指针）。
        也可以理解为，zippo指向二维数组中的第一行。

        因此，zippo的步长也是“包含2个int的一维数组”的总长度，zippo+1表示指向第二行。

        *zippo是指向第一行的第一个元素的地址，*zippo+1是指向第一行的第二个元素的地址。
        【注意】zippo是指向第一行的地址，要和*zippo区分开来。

        也可以说，zippo是地址的地址，保存的是数组第一行的地址，也就是zippo[0](或*zippo)的地址。
        因此，必须解引用zippo两次，形式为：**zippo才能获得数组的数据值。
*/

int main(void) {
  int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

  printf("zippo = %p,  zippo+1 = %p\n", zippo, zippo + 1);
  printf("zippo[0] = %p, zippo[0]+1 = %p\n", zippo[0], zippo[0] + 1);
  printf(" * zippo = %p, * zippo + 1 = %p\n", *zippo, *zippo + 1);
  printf("zippo[0][0] = %d\n", zippo[0][0]);
  printf("*zippo[0] = %d\n", *zippo[0]);
  printf("**zippo = %d\n", **zippo);
  printf("zippo[2][1] = %d\n", zippo[2][1]);
  printf("*(*(zippo+2)+1) = %d\n", *(*(zippo + 2) + 1));

  return 0;
}