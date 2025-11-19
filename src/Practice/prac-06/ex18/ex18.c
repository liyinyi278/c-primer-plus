#include <stdio.h>

int main(void) {
  const int DUNBARS_NUMBER = 150;
  const int ORIGINAL_FRIENDS = 5;

  int friends = ORIGINAL_FRIENDS;
  int weeks = 0;

  while (friends < DUNBARS_NUMBER) {
    weeks++;
    friends = (friends - weeks) * 2;

    printf("Week%3d: %3d friends\n", weeks, friends);
  }

  printf("It took %d weeks to reach Dunbar's number.\n", weeks);

  return 0;
}