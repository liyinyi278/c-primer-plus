#include <stdio.h>

int main(void) {
  unsigned long ulong1 = 1597;
  int int2 = 0x8a;
  float float2 = 2.33e+002;
  float float1 = 232.346;
  char char1[] = "Hello, world!";

  printf("int1 = :%15lu:\n", ulong1);
  printf("int2 = :%#4x:\n", int2);
  printf("float2 = :%-12.2E:\n", float2);
  printf("float1 = :%+10.3f:\n", float1);
  printf("char1 = :%8.8s:\n", char1);

  return 0;
}