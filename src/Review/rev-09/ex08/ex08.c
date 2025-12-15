#include <stdio.h>

int max_num(int num1, int num2, int num3);

int main() {
  int num1, num2, num3;

  printf("Enter three numbers: ");
  while (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
    printf("Invalid input. Please enter three numbers: ");
    while (getchar() != '\n')
      ; // clear the input buffer
  }
  printf("The maximum number is: %d\n", max_num(num1, num2, num3));

  return 0;
}

int max_num(int num1, int num2, int num3) {
  return num1 > num2 ? (num1 > num3 ? num1 : num3)
                     : (num2 > num3 ? num2 : num3);
}