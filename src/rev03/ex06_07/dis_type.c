#include <stdio.h>

int main(void) {
  int int1 = 0X3;
  char char1 = 'C';
  double double1 = 2.34E07;
  char char2 = '\040';
  long long1 = 6L;
  float float1 = 6.1f;
  float float2 = 0x5.b6p12;
  unsigned int uint1 = 012;
  long double long_double1 = 2.9e05L;
  int int2 = 100000;
  int int3 = 0x44;

  printf("int1: %#X\n", int1);
  printf("char1: %c\n", char1);
  printf("double1: %.2e\n", double1);
  printf("char2: Hello,%cWorld!\n", char2);
  printf("long1: %ldL\n", long1);
  printf("float1: %gf\n", float1);
  printf("float2: %a\n", float2);
  printf("uint1: %o\n", uint1);
  printf("long_double1: %.2Le\n", long_double1);
  printf("int2: %d\n", int2);
  printf("int3: %#x\n", int3);
}