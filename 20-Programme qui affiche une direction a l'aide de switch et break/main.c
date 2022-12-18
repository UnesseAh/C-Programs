#include <stdio.h>

int main(){
    int direction;
    printf("Enter the number of the direction : ");
    scanf("%d", &direction);

    while(direction != 6 && direction != 4 && direction != 8 && direction != 2){
        printf("Please enter one of these numbers : 2 / 4 / 6 / 8\n");
        scanf("%d", &direction);
    }

    switch(direction){
        case 6 :
            printf("Move right");
            break;
        case 4 :
            printf("Move left");
            break;
        case 8 :
            printf("Move bottom");
            break;
        case 2 :
            printf("Move top");
            break;
        default : printf("Invalid number or character");
            break;
    }

    return 0;
}