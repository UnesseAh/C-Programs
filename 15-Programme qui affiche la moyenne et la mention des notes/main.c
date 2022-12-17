#include <stdio.h>


int main(){

    float markOne, markTwo, markThree, mark;

    printf("Enter the first mark: ");
    scanf("%f", &markOne);
    while(markOne > 20 || markOne < 0){
        printf("Please, make sure the mark is between 0 and 20 : ");
        scanf("%f", &markOne);
    }

    printf("Enter the second mark: ");
    scanf("%f", &markTwo);
    while(markTwo > 20 || markTwo < 0){
        printf("Please, make sure the mark is between 0 and 20 : ");
        scanf("%f", &markTwo);
    }

    printf("Enter the third mark: ");
    scanf("%f", &markThree);
    while(markThree > 20 || markThree< 0){
        printf("Please, make sure the mark is between 0 and 20 : ");
        scanf("%f", &markThree);
    }

    mark = (markOne + markTwo + markThree)/3;

    if(mark >= 16){
        printf("Tres bien");
    }else if (mark >= 14 && mark < 16){
        printf("Bien");
    }else if (mark >= 12 && mark < 14){
        printf("Assez bien");
    }else if (mark >= 10 && mark < 12){
        printf("Passable");
    }else {
        printf("Insuffisant");
    }

    return 0;
}