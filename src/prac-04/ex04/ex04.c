#include <stdio.h>
#include <string.h>

int main() {
  const int MAX_NAME = 20;
  const int FMT_MAX_NAME = MAX_NAME - 1;

  char name[MAX_NAME];
  double inch;

  printf("Enter your name: ");
  fgets(name, MAX_NAME, stdin);
  int len = strlen(name);
  name[len - 1] = '\0';

  printf("Enter your height in inches: ");
  if (scanf("%lf", &inch) != 1) {
    printf("Error reading height\n");
    return 1;
  }

  printf("Hello, %s. You are %.3f inches tall.\n", name, inch);

  return 0;
}