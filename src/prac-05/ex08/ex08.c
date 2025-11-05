#include <stdio.h>

int main(void)
{
    int first_operator;
    int second_operator;

    printf("This program computes moduli.\n");

    printf("Enter an integer to serve as the second operator: ");
    if (scanf("%d", &second_operator) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (second_operator == 0)
    {
        printf("The second operator cannot be zero.\n");
        return 1;
    }

    printf("Now enter the first operator: ");
    if (scanf("%d", &first_operator) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    while (first_operator > 0)
    {
        printf("%d %% %d = %d\n", first_operator, second_operator, first_operator % second_operator);
        
        printf("Enter next number for first operator (<= 0 to quit): ");
        if (scanf("%d", &first_operator) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Done.\n");
    return 0;
}