#include <stdio.h>

void copy_array(double *dest, double *src_start, double *src_end); // 函数声明
void print_array(double *start, double *end);

int main(void) {
  double arr_src[2][3] = {1, 3, 9.3, 7.5, 2.1, 4};
  double arr_dest[2][3];

  printf("arr_src:\n");
  print_array(*arr_src, *arr_src + 6);

  copy_array(*arr_dest, *arr_src, *arr_src + 6);

  printf("arr_dest:\n");
  print_array(*arr_dest, *arr_dest + 6);

  return 0;
}

/*
    本函数需要用户确保dest数组，可以足够存储src数组元素。
        在使用前，先进行验证。
*/
void copy_array(double *dest, double *src_start, double *src_end) {
  for (double *src = src_start; src != src_end; src++) {
    *dest = *src;
    dest++;
  }
}

void print_array(double *start, double *end) {
  for (double *p = start; p != end; p++) {
    printf("%.2f ", *p);
  }
  printf("\n");
}