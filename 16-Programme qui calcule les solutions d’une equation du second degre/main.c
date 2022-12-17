#include <stdio.h>
#include <math.h>


int main(){

    float A, B, C, delta, x, solutionOne, solutionTwo;

    printf("Enter A, B, C :\n");
    scanf("%f%f%f", &A, &B, &C);

    delta = pow(B, 2)- (4*A*C);

    if(delta < 0){
        printf("This equation doesn't accept any solution");
    }else if (delta == 0){
        x = (-B)/(2*A);
        printf("The solution is : %.2f", x);

    }else {
        solutionOne = (-B-sqrt(delta))/(2*A);
        solutionTwo = (-B+sqrt(delta))/(2*A);
        printf("The solutions are : %.2f %.2f", solutionOne, solutionTwo);
    }

    return 0;
}