#include <math.h>
#include <stdio.h>

int main(void) {
  const double ANSWER = 3.14159;
  double response;

  printf("What is the value of pi?\n");
  if (scanf("%lf", &response) != 1) {
    printf("You didn't enter a number.\n");
    return 1;
  }

  while (fabs(response - ANSWER) > 0.0001) {
    printf("Try again!\n");
    if (scanf("%lf", &response) != 1) {
      printf("You didn't enter a number.\n");
      return 1;
    }
  }

  printf("Close enough!\n");

  return 0;
}