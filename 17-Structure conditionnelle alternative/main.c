#include <stdio.h>


int main(){
    char gender;
    int age;
    printf("Enter the gender of the citizen: ");
    scanf("%c", &gender);
    printf("Enter the age of the citizen: ");
    scanf("%d", &age);

    if ( (gender == 'H' && age >= 20) || (gender == 'F' && age >= 18 && age <= 35)){
        printf("Pay your taxes");
    }else {
        printf("Don't pay your taxes");
    }

    // // Methode 2
    // if(gender == "H"){
    //     if(age > 20) printf("Imposable");
    //     else printf("Non Imposable");
    // }else if(gender == "F"){
    //     if(age >= 18 && age <= 35) printf("Imposable");
    //     else printf("Non Imposable");
    // }else {
    //     printf("Non Imposable");
    // }



    return 0;

}