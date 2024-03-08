#include<stdio.h>
int main(){
    int num1,num2;//declaration
    //taking the input
    printf("Enter the first number :");
    scanf("%d",&num1);

    printf("Enter the second number :");
    scanf("%d",&num2);

    if (num1 < num2)
    {
        /* code */
        printf("%d number is minimum",num1);
    }
    else{
        printf("%d number is minimum",num2);
    }
    


    return 0;
}