#include <stdio.h>

int main(void) {
  const int DUNBARS_NUMBER = 150;
  const int ORIGINAL_FRIENDS = 5;

  int friends = ORIGINAL_FRIENDS;
  int days = 0;

  while (friends < DUNBARS_NUMBER) {
    days++;
    friends = (friends - days) * 2;

    printf("Day%3d: %3d friends\n", days, friends);
  }

  printf("It took %d days to reach Dunbar's number.\n", days);

  return 0;
}