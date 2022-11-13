#include <stdio.h>


int main(){

    int age;
    printf("Enter the age of the child : ");
    scanf("%d", &age);

    if(age >= 6 && age <= 7){
        printf("Poussine");
    }else if(age >= 8 && age <= 9){
        printf("Pupile");
    }else if(age >= 10 && age <= 11){
        printf("Minime");
    }else if(age >= 12){
        printf("Cadet");
    }else {
        printf("something went wrong!");
    }

    return 0;
}