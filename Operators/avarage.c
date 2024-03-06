#include<stdio.h>

int main(){
    int valA, valB, valC, avg;

    printf("Enter the first value :");
    scanf("%d",&valA);

    printf("Enter the first value :");
    scanf("%d",&valB);

    printf("Enter the first value :");
    scanf("%d",&valC);

    avg = (valA + valB + valC) / 3;

    printf("The avarage of these three number is : %d \n",avg);

    return 0;
}