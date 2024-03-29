#include<stdio.h>
int main(){
    int arr[5];
    int max = 0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
            printf("%d\n",max);
    
    
    

    return 0;
}