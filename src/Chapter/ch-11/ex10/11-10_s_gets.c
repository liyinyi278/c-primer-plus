#include <stdio.h>

char *s_gets(char *str, int n);

int main(void) {
    char str[10];

    printf("Enter a string: ");
    s_gets(str, 10);
    printf("You entered: %s\n", str);

    return 0;
}

char *s_gets(char *str, int n) {
    char *ret_val;
    int i = 0;

    ret_val = fgets(str, n, stdin);
    if (ret_val) {
        while (str[i] != '\n' && str[i] != '\0')
            i++;
        if (str[i] == '\n')
            str[i] = '\0';
        else // must be EOF or some other error
            /* 
                之所以丢弃过长输入行中的余下字符。
                是因为输入行中多出来的字符会留在输入缓冲区中，
                成为下一次读取语句的输入。

                而这些余下的字符很可能是垃圾数据，所以必须把它们从缓冲区中清除掉。
            */
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}