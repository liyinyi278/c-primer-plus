#include <stdio.h>

void copy_array(const int row, const int col, double dest[row][col],
                const double src[row][col]);
void print_array(const int row, const int col, const double arr[row][col]);

int main(void) {
  double src_arr[3][5] = {{1.0, 2.0, 3.0, 4.0, 5.0},
                          {6.0, 7.0, 8.0, 9.0, 10.0},
                          {11.0, 12.0, 13.0, 14.0, 15.0}};
  double dest_arr[3][5];

  printf("src_arr:\n");
  print_array(3, 5, src_arr);

  copy_array(3, 5, dest_arr, src_arr);

  printf("dest_arr:\n");
  print_array(3, 5, dest_arr);

  return 0;
}

void copy_array(const int row, const int col, double dest[row][col],
                const double src[row][col]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      dest[i][j] = src[i][j];
    }
  }
}

void print_array(const int row, const int col, const double arr[row][col]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%.2f ", arr[i][j]);
    }
    putchar('\n');
  }

  putchar('\n');
}