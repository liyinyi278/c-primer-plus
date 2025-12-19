#include <stdio.h>

void hanoi(int n, char from, char to, char aux);

int main() {
    hanoi(4, 'A', 'C', 'B');
    return 0;
}

/* 
    使用递归的两个必要条件：
        1、递归终止条件
        2、不断缩小问题规模的递归函数

    递归的优点：
        1、代码简洁
        2、天然适合某些数据结构，比如下面的汉诺塔问题

    递归的缺点：
        1、相比循环，递归占用的内存空间更多，调用函数使得执行速度更慢，所以效率更低一些。
        2、如果递归深度太大，还有栈溢出风险。
*/

/* 
    利用递归解决汉诺塔问题
    n: 盘子的数量
    from: 起始柱子
    to: 目标柱子
    aux: 辅助柱子
*/
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
    putchar('\n');
}