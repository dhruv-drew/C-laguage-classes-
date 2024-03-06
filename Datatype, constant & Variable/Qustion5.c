#include<stdio.h>
int main(){
    int a, b, avg;

    printf("Enter The First Value :");
    scanf("%d",&a);
    
    printf("Enter The Second Value :");
    scanf("%d",&b);

    avg = (a+b)/2;

    printf("The avg is : %d \n",avg);

    return 0;
}