#include<stdio.h>
int main(){

    for (int i = 1; i <= 5; i++)
    {
        /* code */
        for (int k = 4; k >= i; k--)
        {
            /* code */
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            /* code */
            printf("%d",j);
        }
        
               
        printf("\n");
        
    }
    

    return 0;
}