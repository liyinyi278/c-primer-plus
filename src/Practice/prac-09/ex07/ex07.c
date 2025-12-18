#include <stdio.h>

int get_char_position(char ch);
void print_str_info(void);

int main(void) {
  print_str_info();
  return 0;
}

/*
    获取字符在字母表中的数值位置，也就是和字符'a'或'A'的偏移量。
    如果字符不是字母，则返回-1。
*/
int get_char_position(char ch) {
  if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
    return -1;
  } else if (ch >= 'a' && ch <= 'z') {
    return ch - 'a' + 1;
  } else {
    return ch - 'A' + 1;
  }
}

void print_str_info(void) {
  int ch;

  while ((ch = getchar()) != EOF) {
    /* 如果字符是回车键，则查看是否到达文件结尾，如果到达结尾则退出循环 */
    if (ch == '\n') {
      int next = getchar();
      if (next == EOF) {
        break;
      }
      ungetc(next, stdin);  /* 将回车键后一个字符，放回输入流中 */
      continue;
    }

    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
      printf("\'%c\' is not a letter.\n", ch);
    } else {
      printf("\'%c\' is a letter.", ch);
      if (-1 != get_char_position(ch)) {
        printf(" It is the %02dth letter in the alphabet.\n",
               get_char_position(ch));
      } else {
        printf(" It is not in the alphabet.\n");
      }
    }
  }
}