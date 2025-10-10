#include <stdio.h>

int main(void) {
  const int PINT = 1;
  const int CUP = 2 * PINT;
  const int OUNCE = 8 * CUP;
  const int SOUP_LADLE = 2 * OUNCE;
  const int TEASPOON = 3 * SOUP_LADLE;

  int pint, cup, ounce, soup_ladle, teaspoon;

  printf("\nPlease enter the number of cups: ");
  scanf("%d", &cup);

  pint = (cup * PINT) / 2;
  ounce = (cup * OUNCE) / 2;
  soup_ladle = (cup * SOUP_LADLE) / 2;
  teaspoon = (cup * TEASPOON) / 2;

  printf("\nYour input pint is:%d\n", pint);
  printf("Your input cups is:%d\n", cup);
  printf("Your input ounce is:%d\n", ounce);
  printf("Your input soup_ladle is:%d\n", soup_ladle);
  printf("Your input teaspoon is:%d\n", teaspoon);

  return 0;
}