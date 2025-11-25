#include <stdbool.h>
#include <stdio.h>

int main(void) {
  char ch;

  bool floor_flag = false;
  int ei_count = 0;

  printf("Enter a string statistics \"ei\" number of times (# to end): ");
  while ((ch = getchar()) != '#') {
    if (ch == 'e') {
      floor_flag = true;
    } else if (ch == 'i' && floor_flag == true) {
      ei_count++;
      floor_flag = false;
    }
  }

  printf("ei_count: %d\n", ei_count);
  return 0;
}