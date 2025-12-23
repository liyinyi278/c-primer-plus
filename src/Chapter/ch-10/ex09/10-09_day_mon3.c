#include <stdio.h>

#define MONTHS 12

int main(void) {
  // const int MONTHS = 12;
  /*
      在C语言中，数组声明时方括号内必须是常量表达式。
      虽然MONTHS被声明为const int，
      但在C语言中，const修饰的变量并不被视为真正的常量表达式，而是只读变量。
      因此编译器将DAYS[MONTHS]视为变长数组(VLA)的声明，
      但同时又发现它被初始化了，这产生了一个警告。
  */
  const int DAYS[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int index;

  for (index = 0; index < MONTHS; index++)
    printf("Month %02d has %02d days.\n", index + 1, *(DAYS + index));

  return 0;
}