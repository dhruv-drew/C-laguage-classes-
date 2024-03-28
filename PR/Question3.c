#include<stdio.h>
int main(){
    int i,j,rows=1;
    for ( i = 1; i <=5; i++)
    {
        for(j = 1; j<=i; j++){
            printf(" ");
        }
        for(int k = 1; k<=4; k++){
            printf("* ");
        }
        printf("\n");
    }
   return 0; 
}