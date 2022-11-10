#include <stdio.h>

int main(){

    float n1, n2, n3, n4, n5, sum, moyenne;
    printf("Please, enter the first number :\n");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

    sum = n1 + n2 + n3 + n4 + n5;
    moyenne = sum / 5;

    printf("The sum is (%.2f) and the moyenne is (%.2f)", sum, moyenne);

    return 0;
}