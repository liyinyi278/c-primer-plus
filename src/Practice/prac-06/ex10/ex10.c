#include <stdio.h>

long calc_square_sum(int min, int max);

int main(void) {
  int min, max;

  printf("Enter lower and upper integer limits(min >= max to quit):");
  if (scanf("%d%d", &min, &max) != 2) {
    printf("Invalid input\n");
    return 1;
  }

  while (min < max) {
    printf("The sums of the squares from %d to %d is %ld\n", min * min,
           max * max, calc_square_sum(min, max));

    printf("Enter next set of limits(min >= max to quit):");
    if (scanf("%d%d", &min, &max) != 2) {
      printf("Invalid input\n");
      return 1;
    }
  }

  printf("Done\n");
  return 0;
}

long calc_square_sum(int min, int max) {
  long sum = 0;
  for (int i = min; i <= max; i++) {
    sum += i * i;
  }
  return sum;
}