/*
    程序功能：演示strcpy函数的使用

    如果pts1和pts2都是指向字符串的指针，那么“pts2 = pts1;”拷贝的是字符串的地址，而不是字符串本身。
    如果希望拷贝整个字符串，要使用strcpy函数。

    strcpy函数第2个参数（temp）指向的字符串被拷贝至第1个参数（qword[i]）指向的数组中。
    拷贝出来的字符串被称为目标字符串，最初的字符串被称为源字符串。

    程序员有责任确保目标数组有足够的空间容纳源字符串的副本。

    总之，strcpy接受两个字符串指针作为参数，可以把指向源字符串的第2个指针声明为指针、数组名或字符串常量。
        而指向目标字符串的第1个指针应指向一个数据对象（如：数组名），
        且该对象有足够的空间储存字符串的副本。
        记住，声明数组将分配储存数据的空间，而声明指针只分配储存一个地址的空间。

    测试数据：
        quackery
        quasar
        quilt
        quotient
        no more
        quiz    
*/

#include <stdio.h>
#include <string.h>

#define SIZE 40
#define LIM 5

char *s_gets(char *st, int n);

int main(void) {
  char qwords[LIM][SIZE];
  char temp[SIZE];
  int i = 0;

  printf("Enter %d words beginning with 'q':\n", LIM);
  while (i < LIM && s_gets(temp, SIZE)) {
    if (temp[0] != 'q') {
      printf("%s doesn't begin with q!\n", temp);
    } else {
      strcpy(qwords[i], temp);
      i++;
    }
  }

  puts("Here are the words accepted:");
  for (i = 0; i < LIM; i++)
    puts(qwords[i]);

  return 0;
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