/* 正确声明以下各变量： */

#include <stdio.h>

int main() {
  int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  float rates[6] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
  int mat[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
  int *psa[20] = {0};
  char (*pstr)[20] = 0;

  printf("digits: %zd, rates: %zd, mat: %zd, psa: %zd, pstr: %zd\n",
         sizeof(digits) / sizeof(digits[0]), sizeof(rates) / sizeof(rates[0]),
         sizeof(mat) / sizeof(mat[0]), sizeof(psa) / sizeof(psa[0]),
         sizeof(*pstr));

  return 0;
}