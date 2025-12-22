#include <stdio.h>

int get_arr_max(int arr[], int size);

int main(void) {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printf("Origin array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  printf("Array max value: %d\n", get_arr_max(arr, size));

  return 0;
}

int get_arr_max(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}