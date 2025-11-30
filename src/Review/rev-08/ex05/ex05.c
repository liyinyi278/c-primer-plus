/*
    EOF是什么？
*/

/*
    一、EOF 是什么？
        EOF 是 End Of File​ 的缩写，直译为「文件结束」。在 C
   语言里，它是一个特殊的标记值，用来告诉程序：

        要么是「读文件时，已经把文件里的内容全读完了，后面没东西了」；

        要么是「从键盘/终端输入时，用户主动表示“没内容输了（比如按了特定快捷键）”」。

    二、EOF 怎么用？（结合输入函数理解）
        C 语言里很多输入函数（比如
   getchar()、scanf()、fgetc()），遇到「文件结束」或「输入终止」时，会返回 EOF。

    三、关键注意事项（避坑重点）
        用 EOF 时，这几个细节不注意容易踩坑：

        1. 「输入函数的返回值类型」必须用 int，不能用 char！
        这是最容易犯的错！

            比如有人会写 char ch;来接 getchar()的返回值，这就埋雷了。

            为啥？

            getchar()返回值的本质是「字符的 ASCII 码」（范围 0~127），但 EOF 是
   -1（二进制全 1）。

            如果用 char存（尤其是有符号的 char，比如 Windows 下默认 char
   是有符号的），-1会被当成 127（因为 char 范围是 -128~127，-1 溢出后会变成
   127）。

            这样一来，ch == EOF的判断永远不成立，程序就会无限循环！

            所以，必须用 int 来接
   getchar()、fgetc()这类输入函数的返回值，才能正确区分「正常字符」和「EOF」。

        2. EOF 不一定是「真的读完了文件」，也可能是「出错了」！
        输入函数返回 EOF，有两种可能：

            真的把文件/输入流读完了（正常结束）；

            读的过程中出错了（比如文件损坏、设备断开）。

            所以如果要做「严谨的文件处理」，不能只看 != EOF，还要用 feof()和
   ferror()区分：

            feof(文件指针)：判断是不是真的到了文件末尾；

            ferror(文件指针)：判断是不是读/写过程中出错了。

        3. 不同系统的「输入结束快捷键」不一样！
            如果是在键盘输入时触发 EOF，Windows 和 Linux/macOS 的快捷键不同：

            Windows：按 Ctrl + Z后再按回车；

            Linux/macOS：按 Ctrl +
   D（按了就触发，不需要额外回车，但要注意终端设置）。
*/

#include <stdio.h>

int main() {
  FILE *fp = fopen("test.txt", "r");

  if (fp == NULL) {
    printf("Failed to open file.\n");
    return 1;
  }

  int ch;
  while ((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);
  }

  if (ferror(fp)) {
    printf("\n\nError occurred while reading file.\n");
  } else {
    printf("\n\nFile read successfully.\n");
  }

  fclose(fp);
  return 0;
}