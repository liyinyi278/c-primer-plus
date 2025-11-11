#include <stdio.h>

int main(void) {
  int int1;
  float float1;
  float float2;
  char str1[20];
  char str2[20];
  int int2;
  int int3;


  printf("\nPlease enter data:\n");

  printf("\nPlease enter an integer: ");
  scanf("%d", &int1);

  printf("Please enter a float: ");
  scanf("%f", &float1);

  printf("Please enter a float: ");
  scanf("%E", &float2);

  printf("Please enter a string: ");
  scanf("%s", str1);

  printf("Please enter a string: ");
  scanf("%s%d", str2, &int2);

  printf("Please enter an integer: ");
  scanf("%*s %d", &int3);

  printf("\nYou entered:\n");
  printf("int1: *%d*\n", int1); // %d
  printf("float1: *%.2f*\n", float1); // %f
  printf("float2: *%.2E*\n", float2); // %f
  printf("str1: *%s*\n", str1); // %s
  printf("str2: *%s%d*\n", str2, int2); // %s
  printf("int3: *%d*\n", int3); // %d

  return 0;
}