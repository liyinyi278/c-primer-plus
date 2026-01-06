#include <stdio.h>

void copy_array(double src[], double dest[], int size);
void print_array(double array[], int size);

int main(void) {
  double src[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  double dest[3];

  printf("Source array: ");
  print_array(src, 5);

  copy_array(src + 2, dest, 3);

  printf("Destination array: ");
  print_array(dest, 3);

  return 0;
}

void copy_array(double src[], double dest[], int size) {
  for (int i = 0; i < size; i++) {
    dest[i] = src[i];
  }
}

void print_array(double array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%.2f ", array[i]);
  }
  printf("\n");
}