#include <stdio.h>

const double ARTICHOKE_PRICE = 2.05; // 美元/磅
const double BEET_PRICE = 1.15;      // 美元/磅
const double CARROT_PRICE = 1.09;    // 美元/磅

const int DISCOUNT_THRESHOLD = 100; // 美元为单位，超过此金额享受折扣
const double DISCOUNT_RATE = 0.05;  // 折扣率

const int POSTAGE_GRADE_1 = 5;  // 磅为单位
const int POSTAGE_GRADE_2 = 20; // 磅为单位

const double POSTAGE_PRICE_1 = 6.5;         // 美元为单位，5磅以下
const double POSTAGE_PRICE_2 = 14.0;        // 美元为单位，5~20磅以内
const double EXTRA_POSTAGE_PER_POUND = 0.5; // 美元为单位，超出每磅0.5美元

struct Order {
  double artichoke_weight;
  double beet_weight;
  double carrot_weight;
};

void print_star_line(int n);
void select_order_menu(void);
void stats_order(struct Order *order);
void show_order(struct Order *order);

int main(void) {
  struct Order order;

  stats_order(&order);
  show_order(&order);

  return 0;
}

void print_star_line(int n) {
  for (int i = 0; i < n; i++) {
    putchar('*');
  }
  putchar('\n');
}

void select_order_menu(void) {
  const int LINES = 50;
  print_star_line(LINES);
  printf("a. 洋蓟\t\t%.2f\n", ARTICHOKE_PRICE);
  printf("b. 甜菜\t\t%.2f\n", BEET_PRICE);
  printf("c. 胡萝卜\t%.2f\n", CARROT_PRICE);
  printf("q. 退出\n");
  print_star_line(LINES);
  printf("请选择：");
}

void stats_order(struct Order *order) {
  if (order) {
    *order = (struct Order){0, 0, 0};
  } else {
    printf("错误：订单是空的。\n");
  }

  char choice;
  double artichoke_weight;
  double beet_weight;
  double carrot_weight;

  while (1) {
    select_order_menu();
    choice = getchar();
    while (getchar() != '\n') {
      continue;
    }

    switch (choice) {
    case 'a':
      printf("请输入洋蓟的重量：");
      if (scanf("%lf", &artichoke_weight) != 1 || artichoke_weight < 0) {
        printf("输入错误,请重新输入\n");
        while (getchar() != '\n') {
          continue;
        }
        continue;
      } else {
        order->artichoke_weight += artichoke_weight;
        while (getchar() != '\n') {
          continue;
        }
        break;
      }
    case 'b':
      printf("请输入甜菜的重量：");
      if (scanf("%lf", &beet_weight) != 1 || beet_weight < 0) {
        printf("输入错误,请重新输入\n");
        while (getchar() != '\n') {
          continue;
        }
        continue;
      } else {
        order->beet_weight += beet_weight;
        while (getchar() != '\n') {
          continue;
        }
        break;
      }
    case 'c':
      printf("请输入胡萝卜的重量：");
      if (scanf("%lf", &carrot_weight) != 1 || carrot_weight < 0) {
        printf("输入错误,请重新输入\n");
        while (getchar() != '\n') {
          continue;
        }
        continue;
      } else {
        order->carrot_weight += carrot_weight;
        while (getchar() != '\n') {
          continue;
        }
        break;
      }
    case 'q':
      return;
    default: {
      printf("无效的选择,请重新输入\n");
      while (getchar() != '\n') {
        continue;
      }
      continue;
    }
    }
  }
}

double calc_postage(double weight) {
  if (weight <= 0)
    return 0.0;
  if (weight < POSTAGE_GRADE_1) {
    return POSTAGE_PRICE_1;
  } else if (weight < POSTAGE_GRADE_2) {
    return POSTAGE_PRICE_2;
  } else {
    return POSTAGE_PRICE_2 +
           (weight - POSTAGE_GRADE_2) * EXTRA_POSTAGE_PER_POUND;
  }
}

void show_order(struct Order *order) {
  double total_price = order->artichoke_weight * ARTICHOKE_PRICE +
                       order->beet_weight * BEET_PRICE +
                       order->carrot_weight * CARROT_PRICE;
  double total_weight =
      order->artichoke_weight + order->beet_weight + order->carrot_weight;
  double discount_price =
      total_price < DISCOUNT_THRESHOLD ? 0.0 : total_price * DISCOUNT_RATE;
  double postage_price = calc_postage(total_weight);

  printf("订单详情：\n");
  printf("洋蓟售价：%.2lf美元/磅\t订购重量:%.2lf\t订购费用:%.2lf\n",
         ARTICHOKE_PRICE, order->artichoke_weight,
         order->artichoke_weight * ARTICHOKE_PRICE);
  printf("甜菜售价：%.2lf美元/磅\t订购重量:%.2lf\t订购费用:%.2lf\n", BEET_PRICE,
         order->beet_weight, order->beet_weight * BEET_PRICE);
  printf("胡萝卜售价：%.2lf美元/磅\t订购重量:%.2lf\t订购费用:%.2lf\n",
         CARROT_PRICE, order->carrot_weight,
         order->carrot_weight * CARROT_PRICE);
  printf("订单总费用：%.2lf美元\n", total_price);
  printf("折扣：%.2lf美元\n", discount_price);
  printf("邮费：%.2lf美元\n", postage_price);
  printf("总计：%.2lf美元\n", total_price - discount_price + postage_price);
}
