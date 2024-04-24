#include <stdio.h>

int main() {
    int n, nReverse = 0;

    printf("Enter a three digit number: ");
    scanf("%d", &n);

   nReverse += (n % 10) * 100;  
    n /= 10;                        
    
   nReverse += (n % 10) * 10;     
    n /= 10;            

   nReverse += n;                 

    printf("Reversed number: %d\n", nReverse);

    return 0;
}
