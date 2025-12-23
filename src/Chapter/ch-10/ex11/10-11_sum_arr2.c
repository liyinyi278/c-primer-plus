#include <stdio.h>

#define SIZE 10

int sum_p(int *start, int *end);

int main(void) {
  int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  int sum = sum_p(marbles, marbles + SIZE);

  printf("The total number of marbles: %d\n", sum);

  return 0;
}

/*
    注意：
        *end参数是尾后指针，指向数组末尾的下一个位置，而不是数组中的最后一个元素。
        也可以看成是(start + arraysize)。
*/

/* 
    指针表示法（尤其与递增运算符一起使用时）更接近机器语言，
    因此一些编译器编译时能生成效率更高的代码。
    数组表示法的意图更明显。
    具体使用哪种表示法，取决于个人喜好。
*/
int sum_p(int *start, int *end) {
  int sum = 0;

  /*
      后置递增运算符++的优先级等于间接运算符*，
      但结合律是从右往左，因此*start++会被解释为*(start++)。

      由于后置递增运算符++会返回start的原始值参与计算，然后start才会递增。
      因此，循环中会先计算*start，然后start才会递增，直到start等于end为止。
  */
  while (start < end)
    sum += *start++;

  return sum;
}