#include <stdio.h>

int main(void) {
  int x;

  printf("Enter a number: ");
  if (scanf("%d", &x) != 1) {
    printf("Invalid input\n");
    return 1;
  }

  if (5 != x) {
    printf("The number is not 5\n");
  }

  if (x >= 20) {
    printf("The number is greater than or equal to 20\n");
  }

  return 0;
}