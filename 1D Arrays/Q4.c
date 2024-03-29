#include<stdio.h>
int main(){
    int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
    if (arr[i] % 2 != 0)
    {
        /* code */
        printf("%d is an odd number.\n",arr[i]);
    }
    
            
    }
    
    

    return 0;
}