#include<stdio.h>
divideNumber(int a, int b){
    if (b == 0)
    {
        printf("Invalid divisor.");
    }
    else{
        printf("The quotient of this division is : %d",a/b);
    }
}
main(){
    int a,b;
    printf("Enter dividend number: ");
    scanf("%d",&a);
    printf("Enter divisor number: ");
    scanf("%d",&b);

    divideNumber(a,b);
}