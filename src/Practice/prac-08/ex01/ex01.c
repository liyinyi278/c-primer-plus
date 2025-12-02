#include <stdio.h>

/* 
可以使用以下三种方法来运行程序
    （test.exe是编译后的可执行文件，
    mywords是要统计的文本文件）：
    1、在 PowerShell 中通过 cmd /c执行命令，让 CMD 处理重定向：
        cmd /c ".\test.exe < .\mywords"
    2、在 PowerShell 中用 Get-Content读取文件内容，通过管道传给程序： 
        Get-Content .\mywords | .\test.exe
    3、在 CMD 终端中直接输入命令： 
        .\test.exe < .\mywords
*/

int main(void) {
  int chars = 0;

  while (getchar() != EOF) {
    chars++;
  }

  printf("Number of characters: %d\n", chars);

  return 0;
}