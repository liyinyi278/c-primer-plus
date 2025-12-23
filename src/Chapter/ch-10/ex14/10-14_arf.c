#include <stdio.h>

void show_array(const double arr[], int n);
void mult_array(double arr[], int n, double mult);

#define SIZE 5

int main(void) {
  double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

  printf("Original array:\n");
  show_array(dip, SIZE);

  mult_array(dip, SIZE, 2.5);

  printf("Array after calling mult_array:\n");
  show_array(dip, SIZE);

  return 0;
}

/* 
    由于此函数不需要更改arr数组的内容，因此给形参arr添加const限定符是好的编程习惯。
    此外，对函数的形参使用const不仅能保护数据，还能让函数处理const数组。
 */
void show_array(const double arr[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("%8.3f ", arr[i]);
  }
  putchar('\n');
}

/* 
    由于此函数需要更改arr数组的内容，因此不能给形参arr添加const限定符。 
    【注意】
        不能将const数据作为实参传递给非const形参，比如下例的arr形参。
*/
void mult_array(double arr[], int n, double mult) {
  int i;

  for (i = 0; i < n; i++) {
    arr[i] *= mult;
  }
}