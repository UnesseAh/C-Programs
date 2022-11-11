#include <stdio.h>

int main(){

    float R1, R2, R3;
    printf("Enter R1, R2, R3:\n");
    scanf("%f %f %f", &R1, &R2, &R3);

    //Resistance en serie (Rser) Resistance en parallel (Rpar)
    float Rser = R1 + R2 + R3;
    float Rpar = (R1 * R2 * R3) / (R1 * R2 + R1 * R3 + R2 * R3);

    printf("Resistance en serie : %.2f\n", Rser);
    printf("Resistance en parallel : %.2f", Rpar);

    return 0;
}