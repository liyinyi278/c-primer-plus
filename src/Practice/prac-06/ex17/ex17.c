#include <stdio.h>

int main(void) {
  const int INTEREST_RATE = 8;
  const int RATE = 100;
  const int ORIGINAL_AMOUNT = 100000000;
  const int YEAR_TAKE_OUT = 10000000;

  int year = 0;
  int amount = ORIGINAL_AMOUNT;

  while (amount > 0) {
    amount = amount + (amount * INTEREST_RATE / RATE);
    amount = amount - YEAR_TAKE_OUT;
    year++;

    printf("Year: %3d, Amount: %d\n", year, amount);
  }

  printf("It will take %d years to take out %d\n", year, YEAR_TAKE_OUT);

  return 0;
}