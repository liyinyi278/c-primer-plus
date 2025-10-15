#include <stdio.h>

// define 定义需要加前缀#
#define B "booboo"  // booboo是字符串，需要加双引号 
#define X 10

int main(void) {
  int age;
  char name[20];    // 字符串数组，最大长度为20
  int xp;            // xp变量需要定义

  printf("Enter enter your first name: ");
  scanf("%s", name);

  printf("All right, %s. What's your age?\n", name);    // name输出需要使用%s是字符串格式化符
  scanf("%d", &age);        // age输出需要使用%d是整数格式化符

  xp = age + X;

  printf("That's a %s! You must be at least %d.\n", B, xp);

  return 0;
}