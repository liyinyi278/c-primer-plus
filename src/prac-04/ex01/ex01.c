#include <stdio.h>
#include <string.h>

int main(void) {
    const int MAX_NAME_LENGTH = 20;
    char first_name[MAX_NAME_LENGTH];
    char last_name[MAX_NAME_LENGTH];

    printf("Enter your first name: ");
    fgets(first_name, MAX_NAME_LENGTH, stdin);
    first_name[strcspn(first_name, "\n")] = '\0'; 

    printf("Enter your last name: ");
    fgets(last_name, MAX_NAME_LENGTH, stdin);
    last_name[strcspn(last_name, "\n")] = '\0';

    printf("Hello, %s,%s!\n", first_name, last_name);

    return 0;
}