#include <stdio.h>

int main(){
    int yearOfBirth, age;

    printf("Enter the year you were born in:\n");
    scanf("%d", &yearOfBirth);
    
    while(yearOfBirth < 1 || yearOfBirth >= 2022){
        printf("Please, enter a valid number!\n");
        scanf("%d", &yearOfBirth);
    }

    age = 2022 - yearOfBirth;

    (age == 1) ? printf("You are %d year old.", age) : printf("You are %d years old.");

    return 0;
}