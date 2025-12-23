#include <stdio.h>

int main(void) {
  const int SIZE = 10;
  const int PAR = 72;

  int index, score[SIZE];
  int sum = 0;
  float average;

  printf("Enter %d golf scores:\n", SIZE);
  for (index = 0; index < SIZE; index++)
    if (scanf("%d", &score[index]) != 1)
      break;

  printf("The scores read in are as follows:\n");
  for (index = 0; index < SIZE; index++)
    printf("%5d ", score[index]);
  printf("\n");

  for (index = 0; index < SIZE; index++)
    sum += score[index];

  average = (float)sum / SIZE;

  printf("Sum of scores = %d, average = %.2f\n", sum, average);
  printf("That is a handicap of %.0f.\n", average - PAR);

  return 0;
}