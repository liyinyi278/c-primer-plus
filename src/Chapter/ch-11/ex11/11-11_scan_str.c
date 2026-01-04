/* 
    scanf()函数返回一个整数值，该值等于scanf()成功读取的参数个数或EOF。
*/

/* 
    测试数据：
        Jesse Jukes
        Liza Applebottham
        Portensia Callowit
*/

/* 
    根据输入数据的性质，用fgets()读取从键盘输入的数据更合适。
        例如：scanf()无法完整读取书名或歌曲名，除非这些名称是一个单词。
        scanf()的典型用法是读取并转换混合数据类型为某种标准形式。

    scanf()和gets()类似，也存在一些潜在的缺点。
        如果输入行的内容过长，scanf()和gets()都会溢出缓冲区，导致不可预测的行为。
        不过，scanf()在%s格式说明符中有一个额外的特性，可以防止缓冲区溢出。
        在%s格式说明符中，可以指定一个最大字符数，以防止缓冲区溢出。
        例如，%5s表示最多读取5个字符。
*/

#include <stdio.h>

int main(void) {
  char name1[11], name2[11];
  int count;

  printf("Please enter 2 names.\n");
  count = scanf("%5s %10s", name1, name2);
  printf("I read the %d names %s and %s.\n", count, name1, name2);

  return 0;
}