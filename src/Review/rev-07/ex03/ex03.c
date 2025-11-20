#include <stdio.h>

int main() {
  int weight, height; // weight in pounds, height in inches

  printf("Enter your weight in pounds and height in inches: ");
  if (scanf("%d %d", &weight, &height) != 2) {
    printf("Invalid input\n");
    return 1;
  }

  if (weight < 100 || height > 64) {
    if (height >= 72) {
      printf("You are very tall for your weight.\n");
    } else {
      printf("You are tall for your weight.\n");
    }
  } else if (weight > 300 && height < 48) {
    printf("You are quite short for your weight.\n");
  } else {
    printf("Your weight is ideal.\n");
  }

  return 0;
}