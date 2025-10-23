#include <stdio.h>

int main(void) {
    const int BYTE_PER_BIT = 8;

    float file_size = 0.0;
    float download_speed = 0.0;
    float download_time = 0.0;

    printf("Enter file size in MB: ");
    if(scanf("%f", &file_size) != 1){
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter download speed in Mbps: ");
    if(scanf("%f", &download_speed)!= 1){
        printf("Invalid input\n");
        return 1;
    }

    download_time = file_size * BYTE_PER_BIT / download_speed;

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in: %.2f seconds\n", download_speed, file_size, download_time);

    return 0;
}