/* 
    测试数据：
        7.3 4.9 3.0 2.3 0.6 1.2 0.3 0.5 1.7 3.6 6.7 9.8 6.4 7.7 8.9
    最终结果：
        Average of all numbers: 4.33
        Max of all numbers: 9.80
*/
#include <stdio.h>

#define ROWS 3
#define COLS 5

void get_array(double nums[][COLS], const int rows);
double get_average(const double nums[], const int size);
double get_average_of_rows(const double nums[][COLS], const int rows);
double get_max_of_rows(const double nums[][COLS], const int rows);

int main(void) {
  double nums[ROWS][COLS];
  get_array(nums, ROWS);
  printf("Average of all numbers: %.2lf\n", get_average_of_rows(nums, ROWS));
  printf("Max of all numbers: %.2lf\n", get_max_of_rows(nums, ROWS));
}

void get_array(double nums[][COLS], const int rows) {
  printf("Enter %d rows of %d numbers each:\n", rows, COLS);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      while (scanf("%lf", &nums[i][j]) != 1) {
        printf("Invalid input, Please reenter.\n");

        while (getchar() != '\n')
          ;
      }
    }
  }
}

double get_average(const double nums[], const int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += nums[i];
  }
  return sum / size;
}

double get_average_of_rows(const double nums[][COLS], const int rows) {
  double sum = 0;
  for (int i = 0; i < rows; i++) {
    sum += get_average(nums[i], COLS);
  }
  return sum / rows;
}

double get_max_of_rows(const double nums[][COLS], const int rows) {
  double max = nums[0][0];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      if (nums[i][j] > max) {
        max = nums[i][j];
      }
    }
  }
  return max;
}