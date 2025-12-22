#include <stdio.h>

int get_arr_max_index(double arr[], int n);

int main(void) {
  double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  int arr_size = sizeof(arr) / sizeof(arr[0]);
  int max_index = get_arr_max_index(arr, arr_size);

  printf("Original array: ");
  for (int i = 0; i < arr_size; i++) {
    printf("%.2f ", arr[i]);
  }

  printf("\nMax value index is: %d\n", max_index);

  return 0;
}

int get_arr_max_index(double arr[], int n) {
  int max_index = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > arr[max_index]) {
      max_index = i;
    }
  }
  return max_index;
}