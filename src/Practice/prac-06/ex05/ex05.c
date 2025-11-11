#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    char input_char;
    printf("Please enter a capital character(A-Z): ");
    while (true) {
        if(scanf("%c", &input_char) != 1) {
            printf("Invalid input. Please enter a capital character(A-Z): ");            
            while (getchar() != '\n') {
                continue;
            }
            continue;
        }

        
        if(isalpha(input_char) ){
            input_char = toupper(input_char);
            break;
        }else{
            printf("Invalid input. Please enter a capital character(A-Z): ");
            while (getchar() != '\n') {
                continue;
            }
            continue;
        }
    }

    int loop_val = input_char - 'A' + 1;
    for (int row = 1; row <= loop_val; row++) {
        for (int space_num = 1; space_num <= loop_val - row; space_num++) {
            printf(" ");
        }

        for (char asc_char = 'A'; asc_char <= row + 'A' - 1; asc_char++) {
            printf("%c", asc_char);
        }

        for (char desc_char = row + 'A' - 2; desc_char >= 'A'; desc_char--) {
            printf("%c", desc_char);
        }

        printf("\n");
    }

    return 0;
}