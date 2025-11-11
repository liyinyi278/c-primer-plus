#include <stdio.h>

int main(void) {
  int int1 = 1597;
  int int2 = 0x8a;
  float float1 = 232.346;
  float float2 = 2.33e+002;
  char char1[] = "Hello, world!";

  printf("int1 = :%d:\n", int1);
  printf("int2 = :%4X:\n", int2);
  printf("float1 = :%10.3f:\n", float1);
  printf("float2 = :%12.2e:\n", float2);
  printf("char1 = :%-30s:\n", char1);

  return 0;
}