#include <stdio.h>
#include <string.h>

int main(void) {
    const int MAX_NAME_LEN = 50;
    char first_name[MAX_NAME_LEN];
    char last_name[MAX_NAME_LEN];
    char fmt_full_name[MAX_NAME_LEN];
    int fmt_full_name_len;

    printf("Enter your first name: ");
    fgets(first_name, MAX_NAME_LEN, stdin);
    first_name[strcspn(first_name, "\n")] = '\0'; 
    
    printf("Enter your last name: ");
    fgets(last_name, MAX_NAME_LEN, stdin);
    last_name[strcspn(last_name, "\n")] = '\0';

    int ret = snprintf(fmt_full_name, MAX_NAME_LEN, "%s,%s", first_name, last_name);
    if (ret >= MAX_NAME_LEN) {
        printf("Error: name too long\n");
        return 1;
    }

    printf("Hello, :\"%s\":!\n", fmt_full_name);
    printf("Hello, :\"%17s\":!\n", fmt_full_name);
    printf("Hello, :\"%-17s\":!\n", fmt_full_name);

    ret = snprintf(fmt_full_name, MAX_NAME_LEN, "%s,%s", last_name, first_name);
    if (ret >= MAX_NAME_LEN) {
        printf("Error: name too long\n");
        return 1;
    }

    fmt_full_name_len = strlen(fmt_full_name) + 3;
    printf("Hello, :\"%*s\":!\n", fmt_full_name_len, fmt_full_name);

    return 0;
}