/*
    假设有声明：int grid[30][100];
        a、用1种写法表示grid[22][56]的值
        b、用2种写法表示grid[22][0]的值
        c、用3种写法表示grid[0][0]的值
*/

/*
    a、用1种写法表示grid[22][56]的值
        (*(grid+22))[56]

    b、用2种写法表示grid[22][0]的值
        *(grid[22] + 0)
        *(*(grid + 22) + 0)

    c、用3种写法表示grid[0][0]的值
        *(grid[0] + 0)
        *(*(grid + 0) + 0)
        **grid
*/

#include <stdio.h>

int main() {
  int grid[30][100];
  int i, j;

  for (i = 0; i < 30; i++) {
    for (j = 0; j < 100; j++) {
      grid[i][j] = i * 100 + j;
    }
  }

  printf("%d\n", ((*(grid + 22))[56]));
  putchar('\n');

  printf("%d\n", *(grid[22] + 0));
  printf("%d\n", *(*(grid + 22) + 0));
  putchar('\n');

  printf("%d\n", *(grid[0] + 0));
  printf("%d\n", *(*(grid + 0) + 0));
  printf("%d\n", **grid);
  putchar('\n');

  return 0;
}
