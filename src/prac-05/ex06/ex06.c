#include <stdio.h>

int main(void) {
  int days;
  long sum = 0, count = 0;

  printf("Enter the number of days: ");
  if (scanf("%d", &days) != 1) {
    printf("Invalid input\n");
    return 1;
  }
  while (count++ < days)
    sum += count * count;

  printf("%d days sum = %ld\n", days, sum);

  return 0;
}