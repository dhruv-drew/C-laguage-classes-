#include<stdio.h>
int main(){
    int sum = 0, number,first=0,last=0;
    printf("enter the number :");
    scanf("%d",&number);

    last = number % 10;
    while (number >= 10)
    {
        /* code */
        number = number / 10;
    }
    first = number;
    sum = first + last;
    printf("%d",sum);
    return 0;
}