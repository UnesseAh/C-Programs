#include <stdio.h>
#include <math.h>


int main(){

    float Xa, Ya, Xb, Yb;
    float AB;
    printf("Enter Xa : ");
    scanf("%f", &Xa);
    printf("Enter Ya : ");
    scanf("%f", &Ya);
    printf("Enter Xb : ");
    scanf("%f", &Xb);
    printf("Enter Yb : ");
    scanf("%f", &Yb);

    AB = sqrt(pow((Xb - Xa), 2) + pow((Yb - Ya), 2));

    printf("AB = %.2f", AB);

    return 0;
}