#include <stdio.h>;

int main(){
    
    int a, b;
    printf("Enter numer A: ");
    scanf("%d", &a);
    printf("Enter numer B: ");
    scanf("%d", &b);

    int temp;

    temp = a;
    a = b;
    b = temp;
    printf("A is : %d\n", a);
    printf("B is : %d", b);
    

    return 0;
}