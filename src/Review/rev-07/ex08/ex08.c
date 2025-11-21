/* 
  age++ < 65:会先判断age是否小于65，然后再进行age++操作，
  因此，进行while循环后，age从20+1=21开始判断。
  if ((age % 20) == 0)后的语句不会执行，因为age=21时，(21 % 20) != 0。
  age = 65，是将age的值赋值为65，而不是判断age是否等于65。
  65是非0值，因此：if (age = 65)语句会执行。
  最终程序地输出为：
  You are 65. Here is your gold watch.
*/

#include <stdio.h>

int main(void) {
  int age = 20;

  while (age++ < 65) {
    if ((age % 20) == 0)
      printf("You are %d. Here is a raise.\n", age);
    if (age = 65)
      printf("You are %d. Here is your gold watch.\n", age);
  }

  return 0;
}
