/* 
    测试数据：
        By the way, the gets () function
        also returns a null pointer if it
        encounters end-of-file.
*/

#include <stdio.h>

#define STLEN 10

int main(void) {
  char words[STLEN];

  puts("Enter strings (empty line to quit):");

  /* 
    下面的fgets()函数每次的读取长度为STLEN-1，因为最后一个位置留给'\0'。
        虽然没有一次性读取到整行的测试数据，但是利用多次读取的方式，
        依然可以读取到整行数据。
  */

  /* 
    fputs()函数返回指向char的指针。如果一切进行顺利，该函数返回的地址与传入的第1个参数相同。
    但是，如果函数读到文件末尾或遇到错误，该函数将返回一个空指针NULL。
    该指针保证不会指向有效的数据，所以可用于标识这种特殊情况。
  */
  while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    fputs(words, stdout);

  puts("Done.");

  return 0;
}

/* 
    虽然STLEN被设置为10，但是该程序似乎在处理过长的输入时完全没问题。
    程序中的fgets()一次读入STLEN-1个字符，（该例中为9个字符）。
    所以，一开始它只读入了“By the wa”，并储存为“By the wa\0”。
    接着fputs()打印该字符串，而且并未换行。
    然后while循环进入下一轮迭代，fgets()继续从剩余的输入中读入数气，即读入“y, the ge”并储存为“y, the ge\0”。
    接着fputs()打印该字符串，而且并未换行。
    这个过程一直持续到读入“tion\n”。fgets()将其储存为“tion\n\0”，fputs()打印该字符串，
    由于字符串中的\n，光标被移至下一行开始处。

    系统使用缓冲的I/O。这意味着用户在按下回车键之前，输入的数据被储存在缓冲区中。
    当用户按下回车键时，缓冲区中的数据才被发送给fgets()。
    对于输出，fputs()把字符发送给另一个缓冲区，当发送换行符时，缓冲区中的内容被发送到屏幕上。

    fgets()储存换行符有好处也有坏处。
        坏处是：
            你可能并不想把换行符储存在字符串中，这样的换行符会带来一些麻烦。
        好处是：
            对于储存的字符串而言，检查末尾是否有换行符可以判断是否读取了一整行。
            如果不是一整行，要妥善处理一行中剩下的字符。
*/