/*
    putchar(getchar())是一个有效的表达式，它实现什么功能？
    getchar(putchar())是否也是有效表达式？
*/

/*
    要解决上面的问题，首先需要明确：
        函数调用时，参数的数量和类型必须和函数定义严格匹配。

    getchar()的原型是：int getchar(void);
    putchar()的原型是：int putchar(int c);

    根据以上的信息，可以得出：
    1、putchar(getchar())实现什么功能？
        a. 先调用 getchar()从键盘读一个字符，拿到它的 ASCII 码
            （比如你输入'a'，getchar()返回 97）； 
        b. 再把这个 ASCII 码传给putchar()，
            putchar()把对应的字符（'a'）输出到屏幕。

    2、getchar(putchar())是不是有效表达式？
        a. getchar()的参数是 void，不需要参数，
            而getchar(putchar())把一个参数传给了getchar()，
            所以这个表达式是无效的，编译器会直接报错。
        b. putchar()的参数是 int，需要传一个整数，
            而putchar()没有传参数，所以这个表达式也是无效的，编译器会直接报错。
*/

#include <stdio.h>

int main()
{
    while(putchar(getchar()) != EOF);
    //getchar(putchar());
    return 0;
}