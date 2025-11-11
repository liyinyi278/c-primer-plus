#include <stdio.h>

int main(void) {
  const double CM_PER_INCH = 2.54;
  const double INCH_PER_FOOT = 12;

  double height_cm, height_in;
  int height_ft;

  printf("Enter a height in centimeters: ");
  if (scanf("%lf", &height_cm) != 1) {
    printf("Invalid input\n");
    return 1;
  }
  while (height_cm > 0) {
    height_in = height_cm / CM_PER_INCH;
    height_ft = (int)(height_in / INCH_PER_FOOT);
    height_in = height_in - (height_ft * INCH_PER_FOOT);

    printf("%.1lf cm = %d feet, %.1lf inches\n", height_cm, height_ft,
           height_in);

    printf("Enter a height in centimeters: ");
    if (scanf("%lf", &height_cm) != 1) {
      printf("Invalid input\n");
      return 1;
    }
  }

  printf("Bye!\n");
  return 0;
}