#include <stdio.h>

int main(){
    float priceAfterTaxes;
    char category;
    printf("Enter the category of the product : ");
    scanf("%c", &category);
    printf("Enter the price of the product : ");
    scanf("%f", &priceAfterTaxes);


    switch(category){
        case 'A' :
            printf("The price with TVA added is : %.2f", priceAfterTaxes + priceAfterTaxes * 0.07);
            break;
        case 'B' :
            printf("The price with TVA added is : %.2f", priceAfterTaxes + priceAfterTaxes * 0.20);
            break;
        case 'C' :
            printf("The price with TVA added is : %.2f", priceAfterTaxes + priceAfterTaxes * 0.25);
            break;
        default :
            printf("This category doesn't exist");
            break;
    }





    return 0;
}