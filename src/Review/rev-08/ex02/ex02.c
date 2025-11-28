/*
    下面的语句分别完成什么任务？
        a. putchar('H');
        b. putchar('\007');
        c. putchar('\n');
        d. putchar('\b');
*/

/*
    a. putchar('H');
        完成的任务：直接在屏幕上打印字母 H。

    b. putchar('\007');
        完成的任务：让电脑"哔"地响一声（如果音箱开着）。
        说明：
            \007是八进制写法的 ASCII 码（相当于十进制的 7）。
            ASCII 码 7 是响铃符（Bell），老式终端收到它会哔一声。
            \007也可以写成\a（更直观），效果一样。
            现代 IDE（如 VSCode）可能不响，但在命令行运行通常会响。
            别被数字迷惑，本质还是打印一个“控制字符”。

    c. putchar('\n');
        完成的任务：换行（光标跳到下一行开头）。

    d. putchar('\b');
        完成的任务：退格（光标往左挪一格，但不删字）。
        注意：
            它只移动光标，不会删除已显示的字符！
            想真正删字？得配合其他操作（比如再打印个空格盖住）。
            如果光标已在行首，按 \b没反应（左边没地方退了）。

*/

#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    printf("Hello, World!\a");
    printf("Hello, World!\n");
    printf("Hello, World!\b");
    printf("Hello, World!\n");
    return 0;
}