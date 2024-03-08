#include<stdio.h>
#include<math.h>
int main(){ 
    float side1,side2;

    printf("Enter the first side length :");
    scanf("%f",&side1);

    printf("Enter the second side length :");
    scanf("%f",&side2);

    float side3 = (pow(side1,2))+(pow(side2,2));

    side3 = sqrt(side3);

    printf("%.2f",side3);

    return 0;
}