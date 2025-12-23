/*
    如果初始化列表的项数多于数组元素个数,编译器可没那么仁慈,它会毫不留情地将其视为错误。
    但是,没必要因此嘲笑编译器。
    其实,可以省略方括号中的数字,让编译器自动匹配数组大小和初始化列表中的项数。

    但是，这种方法也有缺点。比如下面的例子：

    我们的本意是防止初始化值的个数超过数组的大小，让程序找出数组大小。
    我们初始化时用了10个值，结果就只打印了10个值！
    这就是自动计数的弊端：无法察觉初始化列表中的项数有误。
*/

#include <stdio.h>

int main(void) {
  const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
  int index;

  for (index = 0; index < sizeof days / sizeof days[0]; index++)
    printf("Month %02d has %02d days.\n", index + 1, days[index]);

  return 0;
}