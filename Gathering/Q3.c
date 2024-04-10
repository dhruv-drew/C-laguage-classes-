#include<stdio.h>
  calculateFactorial(int n){
    if (n <= 0)
    {
        printf("The entered number is invalid please enter a positive number.");
    }
    else{
        for (int i = 1; i < n; i++)
        {
            if (n == 1 || n == 0)
            {
                return 1;
            }
            else{
                return n * calculateFactorial( n - 1);
            }
            
        }
        
    }
  }
main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    printf("The factorial of number %d is %d.",n,calculateFactorial(n));
}
