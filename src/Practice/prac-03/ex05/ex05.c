#include <stdio.h>

int main(void) {
    const int YEAR_SECOND = 3.156e7;

    int year;

    printf("\nEnter the number of years: ");
    scanf("%d", &year);

    printf("1 year is %d seconds.", YEAR_SECOND);
    printf("\n%d years is %d seconds.\n", year, year * YEAR_SECOND);

    return 0;
}