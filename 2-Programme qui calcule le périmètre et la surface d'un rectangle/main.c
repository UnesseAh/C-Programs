#include <stdio.h>

int main(){

    float lenght, width, perimeter, area;
    printf("Please, enter the lenght of the rectangle:\n");
    scanf("%f", &lenght);
    while(lenght <= 0){
        printf("Please, enter a positive number:\n");
        scanf("%f", &lenght);
    }

    printf("Please, enter the width of the rectangle:\n");
    scanf("%f", &width);
    while(width <= 0){
        printf("Please, enter a positive number:\n");
        scanf("%f", &width);
    }

    perimeter = 2*(lenght + width);
    area = lenght * width;

    printf("The perimeter of this rectangle is : %.2f.\n", perimeter);
    printf("The area of this rectangle is : %.2f.", area);


    return 0;
}