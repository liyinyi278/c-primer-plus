#include <stdio.h>

int main(void) {
  long num;
  long sum = 0L;
  int status;

  printf("Please enter an integer to be summed: ");
  printf("(q to quit): ");

  status = scanf("%ld", &num);
  // 以下为常见错误演示：将status == 1 写成 status = 1;-->导致死循环，只能强制终止程序
  while (status = 1) {
    sum += num;
    printf("Please enter next integer (q to quit): ");
    status = scanf("%ld", &num);
  }

  printf("Those integers sum to %ld.\n", sum);

  return 0;
}