#include <stdio.h>

void print_star(int n);
int select_tax_category();
void calc_tax(int category, double income, double *tax);

int main(void) {
  int category = 0;
  double income = 0.0;
  double tax = 0.0;

  printf("这个程序用来计算收入税\n");
  while (1) {
    printf("请输入您的收入(0 to quit)：");
    if (scanf("%lf", &income) != 1) {
      printf("输入错误，请重新输入\n");
      while (getchar() != '\n')
        continue; // 清空输入缓冲区
      continue;
    }

    if (income == 0.0) {
      break;
    }

    if (income < 0.0) {
      printf("收入不能为负数，请重新输入\n");
      continue;
    }

    category = select_tax_category();
    calc_tax(category, income, &tax);
    printf("您的应纳税额为：%.2lf\n", tax);
  }

  return 0;
}

void print_star(int n) {
  for (int i = 0; i < n; i++) {
    printf("*");
  }
  putchar('\n');
}

int select_tax_category() {
  const int STAR_LINES = 50;
  int choice = 0;

  while (1) {
    print_star(STAR_LINES);
    printf("1、单身税\t\t\t\t\t\t2、户主税\n");
    printf("3、已婚共有税\t\t\t\t\t\t4、已婚离异税\n");
    print_star(STAR_LINES);

    printf("请选择税种(请输入数字：1~4)：\n");
    if (scanf("%d", &choice) != 1) {
      printf("输入错误，请重新输入\n");
      printf("请选择税种(请输入数字：1~4)：");
      while (getchar() != '\n')
        continue;
      continue;
    }

    switch (choice) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    default: {
      printf("输入错误，请重新输入\n");
      printf("请选择税种(请输入数字：1~4)：");
      while (getchar() != '\n')
        continue;
      continue;
    }
    }
  }

  return 0;
}

void calc_tax(int category, double income, double *tax) {
  const int CENTS_PER_DOLLAR = 100;
  const int RATE = 100;

  const int CATEGORY_1 = 17850 * CENTS_PER_DOLLAR;
  const int CATEGORY_2 = 23900 * CENTS_PER_DOLLAR;
  const int CATEGORY_3 = 29750 * CENTS_PER_DOLLAR;
  const int CATEGORY_4 = 14875 * CENTS_PER_DOLLAR;

  const int TAX_RATE_1 = 15;
  const int TAX_RATE_2 = 28;

  int income_c = (int)(income * CENTS_PER_DOLLAR);
  int tax_c = 0;

  switch (category) {
  case 1:
    tax_c = (income_c <= CATEGORY_1)
                ? income_c * TAX_RATE_1 / RATE
                : CATEGORY_1 * TAX_RATE_1 / RATE +
                      (income_c - CATEGORY_1) * TAX_RATE_2 / RATE;
    break;
  case 2:
    tax_c = (income_c <= CATEGORY_2)
                ? income_c * TAX_RATE_1 / RATE
                : CATEGORY_2 * TAX_RATE_1 / RATE +
                      (income_c - CATEGORY_2) * TAX_RATE_2 / RATE;
    break;
  case 3:
    tax_c = (income_c <= CATEGORY_3)
                ? income_c * TAX_RATE_1 / RATE
                : CATEGORY_3 * TAX_RATE_1 / RATE +
                      (income_c - CATEGORY_3) * TAX_RATE_2 / RATE;
    break;
  case 4:
    tax_c = (income_c <= CATEGORY_4)
                ? income_c * TAX_RATE_1 / RATE
                : CATEGORY_4 * TAX_RATE_1 / RATE +
                      (income_c - CATEGORY_4) * TAX_RATE_2 / RATE;
    break;
  default:
    printf("Invalid category(need to be 1-4)\n");
    break;
  }

  *tax = tax_c * 1.0 / CENTS_PER_DOLLAR;
}
