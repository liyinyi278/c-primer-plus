#include <stdio.h>

int main(void) {
  int target_num = 0;
  int min_bound = 0;
  int max_bound = 100;
  int guess_num = (max_bound + min_bound) / 2;

  printf("Guess a number between 0 and 100:\n");
  while (scanf("%d", &target_num) != 1 || target_num < min_bound ||
         target_num > max_bound) {
    printf("Invalid input. Please enter a number between 0 and 100: ");
    while (getchar() != '\n') {
      // discard input
    }

    printf("Guess a number between 0 and 100:\n");
  }

  while (target_num != guess_num) {
    if (target_num < guess_num) {
      printf("%d is too big.\n", guess_num);
      max_bound = guess_num - 1;
    }else {
      printf("%d is too small.\n", guess_num);
      min_bound = guess_num + 1;
    }

    guess_num = (max_bound + min_bound) / 2;
  }

  printf("You guessed it! The number is %d.\n", guess_num);
  return 0;
}
