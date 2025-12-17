#include <stdio.h>

double min(double x, double y);

int main(void) {
  int a = 10, b = 20;
  double c = 10.5, d = 20.5;

  /* 
    min函数返回值是double类型。
    但是用%d格式输出，因此必须使用（int）进行强制类型转换，
    如果直接用%d输出double数据，会造成未定义行为（通常输出错误值）。
  */
  printf("min(%d, %d) = %d\n", a, b, (int)min(a, b));
  printf("min(%.2f, %.2f) = %.2f\n", c, d, min(c, d));

  return 0;
}

double min(double x, double y) { return x < y ? x : y; }