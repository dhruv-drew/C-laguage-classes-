#include<stdio.h>
int main(){
    int i,j,count = 11;
    for ( i = 1; i <=5; i++)
    {
        /* code */
        for ( j = 1; j <=i; j++)
        {
            /* code */
            printf("%d ",count);
            count++;
        }

        printf("\n");
        
    }

    return 0;
    
}