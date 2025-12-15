/* 设计一个函数，返回两整数之和 */

#include <stdio.h>

int sum(int a, int b) { return a + b; }

int main() {
  int a, b;

  printf("请输入两个整数：");
  while(scanf("%d %d", &a, &b) != 2) {
    printf("输入错误！\n");
    while(getchar() != '\n'){}
    printf("请输入两个整数：");
  }
  printf("两整数之和为：%d\n", sum(a, b));

  return 0;
}