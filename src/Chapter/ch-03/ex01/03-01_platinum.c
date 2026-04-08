/* platinum.c -- 计算体重对应的白金价值 */

#include <stdio.h>

int main(void) {
  // 定义变量
  float weight;      /* 你的体重（磅） */
  float total_worth; /* 相等重量的白金价值 */

  // 固定常量：白金实时价格（美元/金衡盎司）+ 单位换算（金衡盎司/磅）
  const float PLATINUM_PRICE_PER_OUNCE = 1900.0; /* 白金每金衡盎司的价格 */
  const float TROY_OUNCES_PER_POUND = 14.5833;   /* 金衡盎司/磅 */

  // 提示文字
  printf("Are you worth your weight in platinum?\n");
  printf("Let's check it out.\n");
  printf("Please enter your weight in pounds: ");

  /* 获取用户输入的体重，并进行合法性校验 */
  while (scanf("%f", &weight) != 1 || weight <= 0) {
    // 清理错误输入
    while (getchar() != '\n')
      ;
    // 输出错误提示
    printf("Please enter a positive number, such as 150.0.\n");
  }

  /* 计算白金价值 */
  total_worth = PLATINUM_PRICE_PER_OUNCE * weight * TROY_OUNCES_PER_POUND;

  // 输出结果（保留2位小数）
  printf("Your weight in platinum is worth $%.2f.\n", total_worth);

  return 0;
}