#include <stdio.h>

int main() {
  printf("100 > 3 && 'a' > 'c' = %d\n", 100 > 3 && 'a' > 'c');
  printf("100 > 3 || 'a' > 'c' = %d\n", 100 > 3 || 'a' > 'c');
  printf("!(100 > 3) = %d\n", !(100 > 3));

  return 0;
}
