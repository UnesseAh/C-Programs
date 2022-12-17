#include <stdio.h>

int main(){
    int numberOne, numberTwo;
    char operator;

    printf("Enter number one : ");
    scanf("%d", &numberOne);
    printf("Enter operator : ");
    scanf(" %c", &operator);
    printf("Enter number two : ");
    scanf("%d", &numberTwo);

    switch(operator){
        case '+' :
            printf("A + B  = %d", numberOne + numberTwo);
            break;
        case '-' :
        printf("A - B = %d", numberOne - numberTwo);
        break;
        case '*' :
            printf("A * B = %d", numberOne * numberTwo);
            break;        
        case '/' :
            if(numberTwo!=0)
                printf("A / B = %d", numberOne / numberTwo);
            else 
                printf("You cant divise by 0");
            break;
        default : 
            printf("The operator is incorrect");
            break;
    }

    return 0;
}