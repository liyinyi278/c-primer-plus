#include <stdio.h>

#define ROWS 3
#define COLS 5

void print_array(int arr[], int size);
void reverse_array_double(int arr[], int size);

int main(void) {
  int arr[ROWS][COLS] = {
      {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};

  printf("Original array:\n");
  print_array(arr[0], ROWS * COLS);

  reverse_array_double(arr[0], ROWS * COLS);

  printf("Reversed array:\n");
  print_array(arr[0], ROWS * COLS);
}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void reverse_array_double(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] *= 2;
  }
}
