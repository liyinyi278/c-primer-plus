#include <stdio.h>

void invert_sort(double *arr, int n);

int main(void) {
  double arr[] = {1.0,3.0,  5.0,2.0,  4.0};
  int i;

  invert_sort(arr, 5);

  for (i = 0; i < 5; i++) {
    printf("%.2f\t", arr[i]);
  }
  putchar('\n');

  return 0;
}

void invert_sort(double *arr, int n) {
  int i, j;
  double temp;
  int max_index;

  for (i = 0; i < n - 1; i++) {
    max_index = i;
    for (j = i + 1; j < n; j++) {

      if (arr[j] > arr[max_index]) {
        max_index = j;
      }
    }

    temp = arr[i];
    arr[i] = arr[max_index];
    arr[max_index] = temp;
  }
}