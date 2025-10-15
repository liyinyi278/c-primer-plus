#include <stdio.h>

#define BOOK "War and Peace"

int main(void) {
  float cost = 12.99;
  float percent = 80.2;

  printf("This copy of \"%s\" sells for $%.2f.\nThat is %d%% of list.\n", BOOK,
         cost, (int)percent);
  printf("Percent: %f\n", percent);
  printf("Percent: %.2f\n", percent);

  return 0;
}
