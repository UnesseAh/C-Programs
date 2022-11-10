#include <stdio.h>


int main(){
    //Another method to swap the value of two variables without creating any new variable
    int a, b;
    printf("Enter number A : ");
    scanf("%d", &a);
    printf("Enter number B : ");
    scanf("%d", &b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("A is : %d\n", a);
    printf("B is : %d", b);

    return 0;
}