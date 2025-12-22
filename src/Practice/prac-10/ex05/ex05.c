#include <stdio.h>

double get_arr_max_min_diff(double arr[], int size);

int main(void) {
  double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  int size = sizeof(arr) / sizeof(arr[0]);

  double diff = get_arr_max_min_diff(arr, size);
  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%.2f ", arr[i]);
  }

  printf("\nMax - min difference: %.2f\n", diff);

  return 0;
}

double get_arr_max_min_diff(double arr[], int size) {
  double max = arr[0];
  double min = arr[0];
  double diff = 0;

  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  diff = max - min;
  return diff;
}