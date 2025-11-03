#include <stdio.h>

int main(void) {
  const int SQUARES = 64;
  const double CROP = 2E16;

  double current, total;
  int count = 1;

  printf("square    grains    total     fraction of \n");
  printf("         added      grains    world total\n");
  printf("------    ------    --------   -----------\n");

  total = current = 1.0;
  printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);

  while (count < SQUARES) {
    current *= 2;
    total += current;
    count++;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
  }
  printf("That's all.\n");

  return 0;
}