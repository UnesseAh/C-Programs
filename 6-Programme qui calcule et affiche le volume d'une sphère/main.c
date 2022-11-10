#include <stdio.h>

int main(){

    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    
    //Calculate radius power 3 because we need it in the calculation later
    float power = radius;
    int y = 3;
    while(y > 1){
        power = power * radius;
        y--;
    }
    float radiusPowerThree = power;

    //Volume of a sphere =  (4*pi*radius^3/3)
    float PI = 3.14;
    float volume = (4*PI*radiusPowerThree/3);

    printf("The volume of this sphere is : %.2f", volume);

    return 0;
}