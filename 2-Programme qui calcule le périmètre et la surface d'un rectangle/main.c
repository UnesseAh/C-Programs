#include <stdio.h>

int main(){

    int lenght, width;
    printf("Please, enter the lenght of the rectangle:\n");
    scanf("%d", &lenght);
    while(lenght <= 0){
        printf("Please, enter a positive number:\n");
        scanf("%d", &lenght);
    }

    printf("Please, enter the width of the rectangle:\n");
    scanf("%d", &width);
    while(width <= 0){
        printf("Please, enter a positive number:\n");
        scanf("%d", &width);
    }

    int perimeter = 2*(lenght + width);
    int area = lenght * width;

    printf("The perimeter of this rectangle is %d and the area is %d.", perimeter, area);


    return 0;
}