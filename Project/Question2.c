#include<stdio.h>
int main(){
    int n,count = 0;
    printf("Enter a number :");
    scanf("%d",&n);    

    while (n!=0)
    {
        /* code */
        n/=10;
        count++;
    }
    printf("%d\n",count);
    

    return 0;
}