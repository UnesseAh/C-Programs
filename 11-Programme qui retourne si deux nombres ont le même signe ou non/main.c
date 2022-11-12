#include <stdio.h>


int main(){

    int A, B;
    printf("Enter number A : ");
    scanf("%d", &A);
    printf("Enter number B : ");
    scanf("%d", &B);

    //Methode 1:
    if(A > 0 && B > 0) {
        printf("%d and %d have the same sign!", A, B);
    }else if(A < 0 && B < 0) {
        printf("%d and %d have the same sign!", A, B);
    }else {
        printf("%d and %d don't share the same sign!", A, B);
    }
    //Methode 2:
    // (A * B > 0) ? printf("They have the same sign!") : printf("They don't share the same sign!");
    return 0;
}