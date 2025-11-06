#include <stdio.h>

int main(void) {
  const double RATE1 = 0.13230;
  const double RATE2 = 0.15040;
  const double RATE3 = 0.30025;
  const double RATE4 = 0.34025;

  const double BREAK1 = 360.00;
  const double BREAK2 = 468.00;
  const double BREAK3 = 720.00;

  const double BASE1 = RATE1 * BREAK1;
  const double BASE2 = BASE1 + RATE2 * (BREAK2 - BREAK1);
  const double BASE3 = BASE1 + BASE2 + RATE3 * (BREAK3 - BREAK2);

  double kwh;
  double bill;

  printf("Please enter the kwh used: ");
  if (scanf("%lf", &kwh) != 1) {
    printf("Invalid input.\n");
    return 1;
  }

  if (kwh <= BREAK1) {
    bill = kwh * RATE1;
  } else if (kwh <= BREAK2) {
    bill = BASE1 + (kwh - BREAK1) * RATE2;
  } else if (kwh <= BREAK3) {
    bill = BASE2 + (kwh - BREAK2) * RATE3;
  } else {
    bill = BASE3 + (kwh - BREAK3) * RATE4;
  }

  printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);

  return 0;
}