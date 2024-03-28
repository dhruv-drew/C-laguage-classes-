#include<stdio.h>
int main(){
    int i,j,rows=5;
    for ( i = 1; i <=rows-1; i++)
    {
        /* code */
        for(j = i; j<=rows; j++){
            printf(" ");
        }
        for(int k = 1; k<=i; k++){
            printf(" *");
        }
 
        printf("\n");
    }
    for ( i = 3; i <=rows; i++)
    {
        /* code */
        for(j = 1; j<=i; j++){
            printf(" ");
        }
        for(int k = i; k<=5; k++){
            printf(" *");
        }
        
        
        printf("\n");
    }
    

    return 0;
}