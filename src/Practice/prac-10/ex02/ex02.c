#include <stdio.h>

void copy_arr(double dest[], double src[], int n);
void copy_ptr(double *dest, double *src, int n);
void copy_ptrs(double *dest, double *src_start, double *src_end);
void show_arr(double arr[], int n);

int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    printf(" source: ");
    show_arr(source, 5);
    printf("target1: ");
    show_arr(target1, 5);
    printf("target2: ");
    show_arr(target2, 5);
    printf("target3: ");
    show_arr(target3, 5);

    return 0;
    
}

void copy_arr(double dest[], double src[], int n) {
  for (int i = 0; i < n; i++) {
    dest[i] = src[i];
  }
}

void copy_ptr(double *dest, double *src, int n) {
  for (int i = 0; i < n; i++) {
    *dest++ = *src++;
  }
}

void copy_ptrs(double *dest, double *src_start, double *src_end) {
  while (src_start != src_end) {
    *dest++ = *src_start++;
  }
}

void show_arr(double arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%8.2f ", arr[i]);
  }
  putchar('\n');
}
