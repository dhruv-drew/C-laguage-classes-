#include<stdio.h>
int main(){
    int i,j,rows=1;
    for ( i = 5; i >=1; i--)
    {
        for (int k = 4; k >= i; k--)
        {
            /* code */
            printf(" ");  
        }
        
        /* code */
        for ( j = i; j >=1; j--)
        {
            /* code */
            printf(" *");
        }
        
        printf("\n");
    }
    


   return 0; 
}