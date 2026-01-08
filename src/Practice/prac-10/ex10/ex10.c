#include <stdio.h>

void add_arrays(const double arr1[], const double arr2[], double result_arr[],
                size_t size);
void print_array(const double arr[], size_t size);

int main(void) {
  double arr1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  double arr2[] = {6.0, 7.0, 8.0, 9.0, 10.0};
  double result_arr[5];

  add_arrays(arr1, arr2, result_arr, 5);

  printf("arr1:\n");
  print_array(arr1, 5);
  printf("arr2:\n");
  print_array(arr2, 5);
  printf("result_arr:\n");
  print_array(result_arr, 5);

  return 0;
}

void add_arrays(const double arr1[], const double arr2[], double result_arr[],
                size_t size) {
  for (size_t i = 0; i < size; i++) {
    result_arr[i] = arr1[i] + arr2[i];
  }
}

void print_array(const double arr[], size_t size) {
  for (size_t i = 0; i < size; i++) {
    printf("%.2f\t", arr[i]);
  }
  putchar('\n');
}