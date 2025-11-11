#include <stdio.h>

int main(void) {
  const int DAY_PER_WEEK = 7;
  int days;
  
  printf("Please enter a number of days(<= 0 to quit): ");
  if (scanf("%d", &days) != 1) {
    printf("Invalid input\n");
    return 1;
  }
  while (days > 0) {
    int weeks = days / DAY_PER_WEEK;
    int remaining_days = days % DAY_PER_WEEK;

    printf("%d days is %d weeks and %d days\n", days, weeks, remaining_days);

    printf("Please enter next number of days(<= 0 to quit): ");
    if (scanf("%d", &days) != 1) {
      printf("Invalid input\n");
      return 1;
    }
  }

  return 0;
}