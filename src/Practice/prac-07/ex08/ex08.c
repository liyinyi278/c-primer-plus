#include <stdio.h>

/* 通过每周工作的小时参数，计算：总工资，税金和净工资（美分为单位） */
void calc_salary(int hours_worked, const int BASE_SALARY, int *gross_pay,
                 int *taxes, int *net_pay);
int select_base_salary(); // 选择基本工资
void print_star(int num); // 打印星号

int main(void) {
  const int CENTS_PER_DOLLAR = 100;

  int hours_worked;
  int gross_pay;
  int taxes;
  int net_pay;

  printf("请输入您本周工作的小时数(q to quit): ");
  while (scanf("%d", &hours_worked) == 1) {
    int base_salary = select_base_salary();

    calc_salary(hours_worked,base_salary, &gross_pay, &taxes, &net_pay);

    printf("您的工资信息如下：\n");
    printf("基本工资: $%.2f\n", gross_pay * 1.0 / CENTS_PER_DOLLAR);
    printf("税金: $%.2f\n", taxes * 1.0 / CENTS_PER_DOLLAR);
    printf("净工资: $%.2f\n", net_pay * 1.0 / CENTS_PER_DOLLAR);

    printf("\n请输入您本周工作的小时数(q to quit): ");
  }

  return 0;
}

void calc_salary(int hours_worked, const int BASE_SALARY, int *gross_pay,
                 int *taxes, int *net_pay) {
  const int RATE = 100;
  const int CENTS_PER_DOLLAR = 100;

  const int OVERTIME_RATE = 150; // 加班费率
  const int REGULAR_HOURS = 40;  // 每周工作40小时

  const int TAX_BRACKET_1 = 300 * CENTS_PER_DOLLAR; // 美分为单位
  const int TAX_BRACKET_2 = 450 * CENTS_PER_DOLLAR; // 美分为单位

  const int TAX_RATE_1 = 15;
  const int TAX_RATE_2 = 20;
  const int TAX_RATE_3 = 25;

  if (hours_worked < 0) {
    hours_worked = 0;
  }

  long gross_pay_cents = 0;
  if (hours_worked <= REGULAR_HOURS) {
    *gross_pay = hours_worked * BASE_SALARY;
  } else {
    *gross_pay = REGULAR_HOURS * BASE_SALARY + (hours_worked - REGULAR_HOURS) *
                                                   BASE_SALARY * OVERTIME_RATE /
                                                   RATE;
  }

  if (*gross_pay <= TAX_BRACKET_1) {
    *taxes = *gross_pay * TAX_RATE_1 / RATE;
  } else if (*gross_pay <= TAX_BRACKET_2) {
    *taxes = (TAX_BRACKET_1 * TAX_RATE_1) / RATE +
             ((*gross_pay - TAX_BRACKET_1) * TAX_RATE_2) / RATE;
  } else {
    *taxes = (TAX_BRACKET_1 * TAX_RATE_1) / RATE +
             ((TAX_BRACKET_2 - TAX_BRACKET_1) * TAX_RATE_2) / RATE +
             ((*gross_pay - TAX_BRACKET_2) * TAX_RATE_3) / RATE;
  }

  *net_pay = *gross_pay - *taxes;
}

int select_base_salary() {
  const int STAR_NUM = 60;

  while (1) {
    print_star(STAR_NUM);
    // putchar('\n');
    printf(
        "Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75 per hour\t\t\t\t\t\t2) $9.33 per hour\n");
    printf("3) $10.00 per hour\t\t\t\t\t\t4) $11.20 per hour\n");
    printf("5) quit\n");
    print_star(STAR_NUM);

    int select = 0;
    if (scanf("%d", &select) != 1) {
      return -1;
    }
    if (select >= 1 && select <= 5) {
        switch (select) {
          case 1:
            return 875;
            break;
          case 2:
            return 933;
            break;
          case 3:
            return 1000;
            break;
          case 4:
            return 1120;
            break;
          default:
            return 0;        
        }
      return select;
    }else {
      printf("Invalid input. Please try again(1~5).\n");
    }
  }

  return 0;
}

void print_star(int num) {
  for (int i = 0; i < num; i++) {
    printf("*");
  }
  putchar('\n');
}
