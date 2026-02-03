/*
    测试数据：
        7.3 4.9 3.0 2.3 0.6 1.2 0.3 0.5 1.7 3.6 6.7 9.8 6.4 7.7 8.9
    最终结果：
        Average of all numbers: 4.33
        Max of all numbers: 9.80
*/

#include <stdio.h>

void get_array(const int rows, const int cols, double array[rows][cols]);
double get_average(double nums[], const int size);
double get_average_of_rows(const int rows, const int cols,
                           double array[rows][cols]);
double get_max_of_arrays(const int rows, const int cols,
                         double array[rows][cols]);

int main(void) {
  const int rows = 3, cols = 5;
  double array[rows][cols];

  get_array(rows, cols, array);

  printf("Average of all numbers: %.2f\n",
         get_average_of_rows(rows, cols, array));
  printf("Max of all numbers: %.2f\n", get_max_of_arrays(rows, cols, array));
}

void get_array(const int rows, const int cols, double array[rows][cols]) {
  printf("Enter %d rows, %d cols elements of the array: \n", rows, cols);
  for (int i = 0; i < rows; i++) {
    printf("Enter %d elements of row %d: \n", cols, i + 1);
    for (int j = 0; j < cols; j++) {
      while (scanf("%lf", &array[i][j]) != 1) {
        printf("Invalid input, please enter a number: \n");
        while (getchar() != '\n')
          ;
      }
    }
  }
}

double get_average(double nums[], const int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += nums[i];
  }
  return sum / size;
}

double get_average_of_rows(const int rows, const int cols,
                           double array[rows][cols]) {
  double averages[rows];
  for (int i = 0; i < rows; i++) {
    averages[i] = get_average(array[i], cols);
  }
  return get_average(averages, rows);
}

double get_max_of_arrays(const int rows, const int cols,
                         double array[rows][cols]) {
  double max = array[0][0];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (array[i][j] > max) {
        max = array[i][j];
      }
    }
  }
  return max;
}