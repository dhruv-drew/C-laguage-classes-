#include<stdio.h>
int main(){
    float price,discount;

    printf("Enter the price :");
    scanf("%f",&price);
    
    printf("Enter the discount (percent) :");
    scanf("%f",&discount);

    float precent = (price * (discount*0.01));

    printf("The discount amount is : %.2f\n",precent);
    return 0;


}