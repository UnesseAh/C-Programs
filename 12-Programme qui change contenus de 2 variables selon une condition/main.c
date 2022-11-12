#include <stdio.h>

int main(){

    int A, B;
    printf("Enter number A : ");
    scanf("%d", &A);
    printf("Enter number B : ");
    scanf("%d", &B);

    if(A * B > 0){
        A = A + B;
        B = A - B;
        A = A - B;
        printf("A = %d\n", A);
        printf("B = %d", B);

    }else {
        printf("A = %d\n", A + B);
        printf("B = %d", A * B);

    }

    return 0;
}