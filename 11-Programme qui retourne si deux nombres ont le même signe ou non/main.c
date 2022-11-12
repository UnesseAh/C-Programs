#include <stdio.h>


int main(){

    int A, B;
    printf("Enter number A : ");
    scanf("%d", &A);
    printf("Enter number B : ");
    scanf("%d", &B);

    //Methode 1:
    if(A > 0 && B > 0){
        printf("They have the same sign!");
    }else if(A < 0 && B < 0){
        printf("They have the same sign!");
    }else {
        printf("They don't have the same sign!");
    }

    //Methode 2:
    // (A * B > 0) ? printf("They have the same sign!") : printf("They don't have the same sign!");
    return 0;
}