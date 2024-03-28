#include<stdio.h>
int main(){
    int i,j,rows=4;
    
    for (int i = 1; i <= rows; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf(" ");
        }
        for (int k = i; k <= rows; k++)
        {
            printf("* ");

        }
        
        printf("\n");    
    }
    for (int i = 2; i <= rows; i++)
    {
        /* code */
        for (int j = i; j <= rows; j++)
        {
            /* code */
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");

        }
        
        printf("\n");    
    }
    

    return 0;
}