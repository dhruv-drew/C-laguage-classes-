#include<stdio.h>
int main(){
    int i = 2,n;
    printf("Enter the number :");
    scanf("%d",&n);

    do
    {
            printf("%d\n",i);
            i+=2;
        
    } while ( i <= n);

    return 0;
    
}