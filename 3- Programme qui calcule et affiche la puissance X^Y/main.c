#include <stdio.h>

int main(){

    int x, y;   
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);

    int power = x;

    if(x == 1){
        printf("Result is: 1");
        if(x == 0){
            printf("Result is: 0");
        }
    }else if (y == 0){
        printf("Result is: 1");
    }else {
        while( y > 1){
            power = power * x;
            y--;
        }
        printf("Result is: %d", power);

    }

    return 0;

}

