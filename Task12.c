// WAP to convert read time in second and convert it in to hour, minute and second.

#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("Time in hours, minutes and seconds: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}