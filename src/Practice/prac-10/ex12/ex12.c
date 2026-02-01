#include <stdio.h>

#define MONTHS 12
#define YEARS 5

void print_rain(int years, int months, const double rain[years][months]);

int main(void) {
  const double rain[YEARS][MONTHS] = {
      {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
      {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
      {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
      {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
      {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

  print_rain(YEARS, MONTHS, rain);
}

void print_rain(int years, int months, const double rain[years][months]) {
  int year, month;
  double subtot, total;

  printf(" YEAR    RAINFALL  (inches)\n");
  printf("-------  ----------\n");

  for (year = 0, total = 0; year < years; year++) {
    for (month = 0, subtot = 0; month < months; month++) {
      subtot += rain[year][month];
    }
    printf("%5d%12.1f\n", 2010 + year, subtot);
    total += subtot;
  }
  printf("\nThe yearly average is %.1f inches.\n\n", total / years);

  printf("MONTHLY AVERAGES:\n");
  printf("  Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   "
         "Nov   Dec\n");

  for (month = 0; month < months; month++) {
    for (year = 0, subtot = 0; year < years; year++) {
      subtot += rain[year][month];
    }
    printf("%5.1f ", subtot / years);
  }

  printf("\n");

  return;
}
