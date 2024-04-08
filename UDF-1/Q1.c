#include<stdio.h>
addNumbers(int a, int b){
    printf("The sum of two numbers is : %d",a + b);
}
main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    addNumbers(a,b);
}