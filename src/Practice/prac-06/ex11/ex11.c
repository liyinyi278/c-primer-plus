#include <stdio.h>

int main(void) {
  const int NUMS_LEN = 8;

  int nums[NUMS_LEN];

  printf("Enter %d numbers: \n", NUMS_LEN);
  for (int i = 0; i < NUMS_LEN; i++) {
    printf("Enter %d number: ", i + 1);
    if (scanf("%d", &nums[i]) != 1) {
      printf("Invalid input\n");
      return 1;
    }
  }

  printf("\nThe numbers in reverse order are: \n");
  for (int i = NUMS_LEN - 1, count = 1; i >= 0; i--) {
    printf("%d ", nums[i]);
    if (count % 5 == 0) {
      printf("\n");
    }
    count++;
  }

  return 0;
}