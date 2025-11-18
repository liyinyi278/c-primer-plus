#include <stdio.h>

int main() {
  const int ITEMS = 8;

  double arr1[ITEMS], arr2[ITEMS];

  for (int i = 0; i < ITEMS; i++) {
    printf("Please enter %d item: ", i + 1);
    if (scanf("%lf", &arr1[i]) != 1) {
      printf("Invalid input\n");
      return 1;
    }
  }

  for (int i = 0; i < ITEMS; i++) {
    if (i == 0) {
      arr2[i] = arr1[i];
    } else {
      arr2[i] = arr1[i] + arr2[i - 1];
    }
  }

  for (int i = 0; i < ITEMS; i++) {
    printf("%10.2lf ", arr1[i]);
  }
  printf("\n");

  for (int i = 0; i < ITEMS; i++) {
    printf("%10.2lf ", arr2[i]);
  }
  printf("\n");

  return 0;
}