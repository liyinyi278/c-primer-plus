#include <stdio.h>
#include <stdlib.h>

#define ROWS 800
#define COLS 600

int main(void) {
  int matrix[ROWS][COLS];
  int i, j;
  int sum = 0;

  // Initialize the matrix with random values
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      matrix[i][j] = rand() % 100;
    }
  }

  // Calculate the sum of all elements in the matrix
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      //   printf("%03d ", matrix[i][j]); //数据量太大，打印会消耗大量时间
      sum += matrix[i][j];
    }
  }

  printf("\nSum of all elements: %d\n", sum);

  return 0;
}