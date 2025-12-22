/*
    假设有下面的声明：
        float rootbeer[10], things[10][5], *pf, value = 2.2;
        int i= 3;

    判断以下各项是否有效：
        a. rootbeer[2] = value; //有效，相同float类型的变量，可以自由赋值。

        //无效，&rootbeer是整个数组的地址，应该为rootbeer或&rootbeer[0]，这才代表数组第一个元素的地址。
        b. scanf ("%f", &rootbeer );

        //无效，rootbeer是数组名，是一个常量地址，不能赋值。
        c. rootbeer = value;

        //无效，printf的%f格式是用于打印一个浮点数值，不能打印地址。
        d. printf("%f", rootbeer);

        e. things[4] [4] = rootbeer[3]; //有效，二者都是数组元素，类型匹配。

        //无效，C语言规定：数组不能直接赋值给另一个数组。
        f. things[5] = rootbeer;

        //无效，pf是指针变量，value是浮点数，类型完全不匹配，编译器会报错。
        g. pf = value;

        h. pf = rootbeer;               //有效，pf指向rootbeer的首元素。

*/

#include <stdio.h>

int main(void) {
  float rootbeer[10], things[10][5], *pf, value = 2.2;
  int i = 3;

  rootbeer[2] = value; // 有效，相同float类型的变量，可以自由赋值。

  // 无效，&rootbeer是整个数组的地址，应该为rootbeer或&rootbeer[0]，这才代表数组第一个元素的地址。
  //   scanf("%f", &rootbeer);
  scanf("%f", &rootbeer[0]);

  // 无效，rootbeer是数组名，是一个常量地址，不能赋值。
  //   rootbeer = value;

  // 无效，printf的%f格式是用于打印一个浮点数值，不能打印地址。
  //   printf("%f", rootbeer);
  printf("%f", rootbeer[0]);

  things[4][4] = rootbeer[3]; // 有效，二者都是数组元素，类型匹配。

  // 无效，C语言规定：数组不能直接赋值给另一个数组。
  //   things[5] = rootbeer;

  // 无效，pf是指针变量，value是浮点数，类型完全不匹配，编译器会报错。
  //   pf = value;

  pf = rootbeer; // 有效，pf指向rootbeer的首元素。

  return 0;
}