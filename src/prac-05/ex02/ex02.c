#include <stdio.h>

int main(void) {
    int loop_num;

    printf("Please input a number to loop: ");
    if (scanf("%d", &loop_num) != 1) {
        printf("Input error!\n");
        return 1;
    }

    for (int i = loop_num; i <= loop_num +10; i++) {
        printf("%d ", i);
        if ((i-loop_num + 1) % 5 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}