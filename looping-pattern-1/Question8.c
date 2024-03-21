#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            /* code */
            printf("%d ",count);
            count++;
        }
        
        printf("\n");
    }
    
}