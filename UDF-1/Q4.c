#include<stdio.h>
calculateSquare(int a){
    printf("The cube of two numbers is : %d",a * a * a);
}
main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);


    calculateSquare(a);
}