#include <stdio.h>

int main(){
    int time;
    printf("Enter time in seconds: ");
    scanf("%d", &time);

    int hours = time/3600;
    int minutes = (time%3600)/60;
    int seconds = (time%3600)%60;

    printf("%dH %dm %ds", hours, minutes, seconds);

    return 0;
}