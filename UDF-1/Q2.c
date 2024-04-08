#include<stdio.h>
multyplyNumbers(int a, int b){
    printf("The multiplication of two numbers is : %d",a * b);
}
main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    multyplyNumbers(a,b);
}