#include<stdio.h>
int main(){
    float weight, height;

    printf("Enter your weight (m) :");
    scanf("%f",&weight);

    printf("Enter your Height (kg) :");
    scanf("%f",&height);

    float BDM = weight/(height*height);

    printf("%.2f",BDM);

    return 0;
}