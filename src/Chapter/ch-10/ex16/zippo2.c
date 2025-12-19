#include <stdio.h>

int main(void) {
  int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

  /*
      由于下标运算符优先级高于指针运算符，所以需要使用括号，让pz先和*结合。
          这样，代表pz是一个指针，指向一个包含两个int的数组。
      如果不加括号，如int *pz[2]，则pz会和[2]先结合。
          这样，代表pz是一个数组，包含两个指向int类型的指针。
  */
  int (*pz)[2] = zippo;

  printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);
  printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
  printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);
  printf("pz[0][0] = %d\n", pz[0][0]);
  printf("*pz[0] = %d\n", *pz[0]);
  printf("**pz = %d\n", **pz);
  printf("pz[2][1] = %d\n", pz[2][1]);
  printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));

  /* 
    虽然pz是一个指针，不是数组名，但是也可以使用pz[2][1]这样的写法。

    可以用数组表示法或指针表示法来表示一个数组元素，既可以使用数组名，也可以使用指针名。
  */

  return 0;
}