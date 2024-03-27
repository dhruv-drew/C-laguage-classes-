#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++){
        factorial= factorial*i;
        
    }
    printf("The factorial of number %d is: %d",n,factorial);

    return 0;
}