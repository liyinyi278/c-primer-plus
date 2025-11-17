#include <stdio.h>

void fmt_print_int(int num);

int main(void) {
    int min, max;

    printf("Enter two number format output:\n");
    printf("Enter the min value: ");
    if(scanf("%d", &min)!=1){
        printf("Invalid input\n");
        return 1;
    }
    printf("Enter the max value: ");
    if(scanf("%d", &max)!= 1){
        printf("Invalid input\n");
        return 1;
    }

    if (min > max) {
      int temp = min;
      min = max;
      max = temp;
    }

    for (int i = min; i <= max; i++) {
      fmt_print_int(i);
    }
}

void fmt_print_int(int num) {
  printf("Origin num:%d\t\tSquare num:%d\t\tCube num:%d\n", num, num * num,
         num * num * num);
}