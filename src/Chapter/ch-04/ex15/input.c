#include <stdio.h>

int main(void) {
  int age;
  float assets;
  char pet[30];

  printf("\nEnter your age, assets, and favorite pet.\n");
  scanf("%d %f %s", &age, &assets, pet);
  printf("%d $%.2f %s\n", age, assets, pet);

  return 0;
}