#include <stdio.h>

int main(void) {
  const int SECRET_CODE = 13;

  int code_entered;

  printf("To enter the triskaidekaphobia therapy club,\n");
  printf("please enter the secret code number: ");
  if (scanf("%d", &code_entered) != 1) {
    printf("You didn't enter a number!\n");
    return 1;
  }
  while (code_entered != SECRET_CODE) {
    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number: ");
    if (scanf("%d", &code_entered) != 1) {
      printf("You didn't enter a number!\n");
      return 1;
    }
  }

  printf("Congratulations! You are now a member of the club!\n");

  return 0;
}