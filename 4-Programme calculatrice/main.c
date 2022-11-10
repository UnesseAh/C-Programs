#include <stdio.h>

int main(){

    double numOne, numTwo;
    char operator;

    printf("Enter number one : ");
    scanf("%lf", &numOne);
    printf("Enter the operator (+, -, *, /) : ");
    scanf(" %c", &operator);
    printf("Enter number two : ");
    scanf("%lf", &numTwo);

    switch(operator){
        case '+':
            printf("Result : %.2lf", numOne + numTwo);
            break;
        case '-':
            printf("Result : %.2lf",  numOne - numTwo);
            break;
        case '*':
        printf("Result : %.2lf",  numOne * numTwo);
            break;
        case '/':
        printf("Result : %.2lf", numOne / numTwo);
            break;
        default:
            printf("Something went wrong");
    }

    return 0;
}