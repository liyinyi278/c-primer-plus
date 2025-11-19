#include <stdio.h>

double amount_coverted(int amount);

int main(void) {
  const int SIMPLE_INTEREST_RATE = 10;
  const int COMPOUND_INTEREST_RATE = 5;
  const int RATE = 100;
  const int ORIGINAL_AMOUNT = 10000;

  int years = 0;
  int daphne_amount = ORIGINAL_AMOUNT;
  int deirdre_amount = ORIGINAL_AMOUNT;

  do {
    daphne_amount += ORIGINAL_AMOUNT * SIMPLE_INTEREST_RATE / RATE;
    deirdre_amount += deirdre_amount * COMPOUND_INTEREST_RATE / RATE;
    years++;
    printf("Year %3d: Daphne's amount is %.2lf and Deirdre's amount is %.2lf\n",
           years, amount_coverted(daphne_amount),
           amount_coverted(deirdre_amount));
  }while (daphne_amount > deirdre_amount);

  printf("\nIt takes %d years for Deirdre's amount to be greater than Daphne's.\n", years);

  return 0;
}

double amount_coverted(int amount) {
  double converted_amount = amount * 0.01;
  return converted_amount;
}