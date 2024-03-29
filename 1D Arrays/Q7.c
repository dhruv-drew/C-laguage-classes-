#include<stdio.h>
int main(){
    int arr[5];
    int min = arr[0];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
            printf("%d\n",min);
    
    
    

    return 0;
}