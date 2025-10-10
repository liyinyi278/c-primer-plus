#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void) {
  // int
  printf("int: %d\n", INT_MAX);
  printf("int: %d\n", (int)((unsigned int)INT_MAX + 1));
  printf("int: %d\n", INT_MIN);
  printf("int: %u\n", UINT_MAX);
  printf("int: %lu\n", ULONG_MAX);
  printf("int: %llu\n", ULLONG_MAX);

  // float
  printf("float: %e\n", FLT_MAX);
  printf("float: %e\n", FLT_MAX * 2);
  printf("float: %la\n", FLT_MIN);
  printf("float: %la\n", FLT_MIN - (FLT_MIN * FLT_EPSILON));
  printf("float: %e\n", FLT_EPSILON);

  // double
  printf("double: %f\n", DBL_MAX);
  printf("double: %e\n", DBL_MIN);
  printf("double: %e\n", DBL_MIN);
  printf("double: %e\n", DBL_EPSILON);

  return 0;
}