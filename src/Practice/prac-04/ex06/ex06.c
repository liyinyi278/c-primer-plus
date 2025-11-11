#include <stdio.h>
#include <string.h>

int main(void)
{
    const int NAME_MAX_LEN = 20;

    char first_name[NAME_MAX_LEN];
    char last_name[NAME_MAX_LEN];

    int first_name_len;
    int last_name_len;

    printf("Enter your first name: ");
    if(!fgets(first_name, NAME_MAX_LEN, stdin)){
        printf("Error reading input\n");
        return 1;
    }
    first_name[strcspn(first_name, "\n")] = '\0'; 

    printf("Enter your last name: ");
    if(!fgets(last_name, NAME_MAX_LEN, stdin)){
        printf("Error reading input\n");
        return 1;
    }
    last_name[strcspn(last_name, "\n")] = '\0'; 

    first_name_len = strlen(first_name);
    last_name_len = strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", first_name_len, first_name_len, last_name_len, last_name_len);
    
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", first_name_len, first_name_len, last_name_len, last_name_len);

    return 0;
}