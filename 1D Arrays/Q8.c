#include<stdio.h>
int main(){
    int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        /* code */
        printf("%d\n",arr[i]);
    }
    
    

    return 0;
}