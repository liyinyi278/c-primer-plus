/* 一个拖沓且错误的猜数字程序+修改后的程序 */

#include <stdio.h>

int main(void) {
  int guess = 1;

  printf("Pick an integer from 1 to 100. I will try to guess ");
  printf("it.\nRespond with a y if my guess is right and with");
  printf("\nan n if it is wrong.\n");
  printf("Uh...is your number %d?\n", guess);

  char response;
  /* 获取响应，与 y 做对比*/
  while ((response = getchar()) != 'y') {
    if ('n' == response) {
      printf("Well, then, is it %d?\n", ++guess);
    } else {
      printf("Sorry, I understand only y or n.\n");
    }

    /* 跳过输入行剩余部分 */
    while (getchar() != '\n') {
      continue;
    }
  }
  printf("I knew I could do it!\n");

  return 0;
}

// #include <stdio.h>

// int main(void) {
//   int guess = 1;

//   printf("Pick an integer from 1 to 100. I will try to guess ");
//   printf("it.\nRespond with a y if my guess is right and with");
//   printf("\nan n if it is wrong.\n");
//   printf("Uh...is your number %d?\n", guess);
//   while (getchar() != 'y')    /* 获取响应，与 y 做对比*/
//     printf("Well, then, is it %d?\n", ++guess);
//   printf("I knew I could do it!\n");

//   return 0;
// }