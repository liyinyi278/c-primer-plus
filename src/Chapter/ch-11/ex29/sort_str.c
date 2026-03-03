/*
    程序功能：读入字符串，并排序字符串。

    此程序的巧妙之处在于排序的是指向字符串的指针，而不是字符串本身。
      这样做的优点在于排序的效率提高了，而且保留了input数组中的原始数据顺序。

    此程序采用选择排序算法（selection sort algorithm）来排序指针。
      具体做法是，利用for循环依次把每个元素与首元素比较。
      如果待比较的元素在当前首元素的前面，则交换两者。
      循环结束时，首元素包含的指针指向机器排序序列最靠前的字符串。
      然后外层for循环重复这一过程，直到所有元素都排序完成。

    选择排序伪代码：
      for n = 首元素至 n = 倒数第 2 个元素，
        找出剩余元素中的最小值，并将其放在第n个元素中（内层for循环）
      外层循环指明正在处理数组的哪一个元素，内层循环找出应储存在该元素的值。

    提醒：C库中有一个更高级的排序函数：qsort()。
      此函数使用一个指向函数的指针进行排序比较。

    测试数据：
        o that I was where I would be,
        Then would I be where I am not;
        But where I am I must be,
        And where I would be I can not.

        注：最后为一行空行
*/

#include <stdio.h>
#include <string.h>

#define SIZE 81 // 字符串最大长度,包括'\0'
#define LIM 20  // 可读入的最多行数
#define HALT "" // 结束输入的字符串

void str_sort(char *strings[], int num);
char *s_gets(char *st, int n);

int main(void) {
  char input[LIM][SIZE]; // 储存输入的数组
  char *pt_str[LIM];     // 内含指针变量的数组，指向输入的字符串
  int count = 0;         // 输入计数
  int k = 0;                 // 输出计数

  printf("Input up to %d lines, and I will sort them.\n", LIM);
  printf("To stop, press the Enter key at a line's start.\n");

  while (count < LIM && s_gets(input[count], SIZE) != NULL &&
         input[count][0] != '\0') {
    pt_str[count] = input[count]; // 设置指针指向字符串
    count++;
  }

  str_sort(pt_str, count); // 字符串排序函数

  printf("\nHere's the sorted data:\n");

  for (k = 0; k < count; k++) {
    puts(pt_str[k]); // 排序后的指针
  }

  return 0;
}

/* 字符串-指针-排序函数 */
// void str_sort(char *strings[], int num) {
//   int top, seek;
//   char *temp;

//   for (top = 0; top < num - 1; top++) {
//     for (seek = top + 1; seek < num; seek++) {
//       if (strcmp(strings[top], strings[seek]) > 0) {
//         temp = strings[top];
//         strings[top] = strings[seek];
//         strings[seek] = temp;
//       }
//     }
//   }
// }

void str_sort(char *strings[], int num) {
  int top, seek, min_index;
  char *temp;

  for (top = 0; top < num - 1; top++) {
    for (seek = top + 1, min_index = top; seek < num; seek++) {
      if (strcmp(strings[top], strings[seek]) > 0) {
        min_index = seek;
      }
      temp = strings[top];
      strings[top] = strings[min_index];
      strings[min_index] = temp;
    }
  }
}

char *s_gets(char *st, int n) {
  char *ret_val;
  int i = 0;

  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    while (st[i] != '\n' && st[i] != '\0')
      i++;
    if (st[i] == '\n')
      st[i] = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}