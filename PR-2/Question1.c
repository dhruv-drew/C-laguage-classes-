#include<stdio.h>
int main(){
    int number;
    printf("Enter any number :");
    scanf("%d",&number);

    (number % 2 == 0 )? printf("%d is even number.\n",number) : printf("%d is odd numbr.\n",number);

    return 0;
}