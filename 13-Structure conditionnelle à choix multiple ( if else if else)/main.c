#include <stdio.h>

int main(){
    int number;
    float price;
    printf("Enter the number of copies : ");
    scanf("%d", &number);

    if(number <= 10){
        price = number * 0.30;
    }else if(number <= 30){
        price = 10 * 0.30 + (number - 10) * 0.25;
    }else {
        price = 10 * 0.30 + 20 * 0.25 + (number - 30) * 0.20;
    }

    printf("Total : %.2f DH", price);


    return 0;
}