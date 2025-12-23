#include <stdbool.h>
#include <stdio.h>

long get_long(void);
double sum_squares(long a, long b);
bool bad_limits(long begin, long end, long low, long high);

int main(void) {
  const long MIN = -10000000L; // 范围的上限
  const long MAX = 10000000L;  // 范围的下限

  long start, stop;
  double answer;

  printf("This program computes the sum of the squares of "
         "integers in a range.\n");
  printf("The lower bound should not be less than -10000000 and\n");
  printf("the upper bound should not be more than 10000000.\n");
  printf("Enter the limits (enter 0 for both limits to quit):\n");
  printf("lower limit: ");

  start = get_long();
  printf("upper limit: ");
  stop = get_long();

  while (start != 0 || stop != 0) {
    if (bad_limits(start, stop, MIN, MAX))
      printf("Please enter values in the range [%ld, %ld].\n", MIN, MAX);
    else {
      answer = sum_squares(start, stop);
      printf("The sum of the squares of the integers ");
      printf("from %ld to %ld is %g\n", start, stop, answer);
    }
    printf("\nEnter the limits (enter 0 for both limits to quit):\n");
    printf("lower limit: "); // 重新输入
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
  }

  printf("Done.\n");
  return 0;
}

long get_long(void) {
  long input;
  char ch;

  while (scanf("%ld", &input) != 1) {
    while ((ch = getchar()) != '\n')
      putchar(ch);
    printf(" is not an integer.\nPlease enter an integer value, such as 25, "
           "-178, or 3: ");
  }

  return input;
}

double sum_squares(long a, long b) {
  double total = 0;
  long i;
  for (i = a; i <= b; i++)
    total += (double)i * (double)i;
  return total;
}

bool bad_limits(long begin, long end, long low, long high) {
  bool not_good = false;

  if (begin > end) {
    printf("%ld isn't smaller than %ld.\n", begin, end);
    not_good = true;
  }

  if (begin < low || end < low) {
    printf("Values must be %ld or greater.\n", low);
    not_good = true;
  }

  if (begin > high || end > high) {
    printf("Values must be %ld or less.\n", high);
    not_good = true;
  }

  return not_good;
}