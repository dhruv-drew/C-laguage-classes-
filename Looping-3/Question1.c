#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        /* code */
    sum = sum + i;
    
    }
    
    printf("The sum of all is : %d",sum);

    return 0;
}