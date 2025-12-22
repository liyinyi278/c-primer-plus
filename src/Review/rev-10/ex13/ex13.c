#include <stdio.h>

void show(const double arr[], int size);
void show2(const double arr2[][3], int size);

int main(void) {
    show((double[]){8, 3, 9, 2}, 4);
    show2((double[][3]){{8, 3, 9}, {5, 4, 1}}, 2);
}

void show(const double arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%.2lf ", arr[i]);
  }
  printf("\n");
}

void show2(const double arr2[][3], int rows) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%.2lf ", arr2[i][j]);
    }
    printf("\n");
  }
}