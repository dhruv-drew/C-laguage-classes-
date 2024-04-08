#include<stdio.h>
calculateCube(int a){
    printf("The sqaure of two numbers is : %d",a * a);
}
main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);


    calculateCube(a);
}