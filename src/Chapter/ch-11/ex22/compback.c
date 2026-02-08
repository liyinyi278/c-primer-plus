/* 
    程序功能：测试strcmp的返回值。

    如果在字母表中，第一个字符串在第二个字符串之前，则返回一个负数。
    如果两个字符串相等，则返回0。
    如果第一个字符串在字母表中位于第二个字符串之后，则返回一个正数。

    返回值可能是“1”或“-1”，也可能是两个字符串之间ASCII码值的差值。
        具体的返回值取决于实现。

    如果两个字符串开始的几个字符相同，strcmp会依次比较每个字符，直到找到第1对不同的字符为止。
        然后，返回相应的值。
    在本程序的最后一个例子中，“apples”和“apple”只有最后一对字符不同，即‘s’和空字符。
        由于空字符在ASCII码中排第1，字符s一定在它后面，所以strcmp函数返回了一个正数。
    最后一个例子表明，strcmp比较所有的字符，不只是字母。
        所以，与其说该函数按字母顺序进行比较，不如说是按机器排序序列（machine collating sequence）进行比较，
        即根据字符的数值进行比较（通常都使用ASCII值）。
    
    strcmp函数比较的是字符串，不是字符，所以其参数应该是字符串（如：“A”），而不是字符（如：‘A’）。
        但是，char类型实际上是整数类型，所以可以使用关系运算符来比较字符。
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  printf("strcmp(\"A\", \"A\") is %d\n", strcmp("A", "A"));

  printf("strcmp(\"A\", \"B\") is %d\n", strcmp("A", "B"));

  printf("strcmp(\"B\", \"A\") is %d\n", strcmp("B", "A"));

  printf("strcmp(\"C\", \"A\") is %d\n", strcmp("C", "A"));

  printf("strcmp(\"Z\", \"a\") is %d\n", strcmp("Z", "a"));

  printf("strcmp(\"apples\", \"apple\") is %d\n", strcmp("apples", "apple"));

  return 0;
}
