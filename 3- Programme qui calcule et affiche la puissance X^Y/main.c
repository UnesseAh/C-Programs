#include <stdio.h>

int main(){

    int x, y;   
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);

    int power = x;


    while (y > 1)
    {
        power = power * x;
        y--;
    }
    printf("Result is: %d", power);

    return 0;

}

