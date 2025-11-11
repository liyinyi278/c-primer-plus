#include <stdio.h>

int main() {
  const int MINUTE_PER_HOUR = 60;

  int input_minute;

  printf("Input minute(less than or equal to 0 to exit): ");
  if (scanf("%d", &input_minute) != 1) {
    printf("Invalid input\n");
    return 1;
  }
  while (input_minute > 0) {
    printf("your input minute number is:%d\n", input_minute);
    printf("your input = %d hour %d minute\n", input_minute / MINUTE_PER_HOUR,
           input_minute % MINUTE_PER_HOUR);

    printf("\nInput next minute(less than or equal to 0 to exit): ");
    if (scanf("%d", &input_minute) != 1) {
      printf("Invalid input\n");
      return 1;
    }
  }

  return 0;
}