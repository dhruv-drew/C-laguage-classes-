#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

    if (number % 2 == 0)
    {
        /* code */
        printf("The number %d is even number.",number);
    }
    else if (number % 2 != 0)
    {
        /* code */
        printf("The number %d is odd number.",number);

    }
    
    

    return 0;
}