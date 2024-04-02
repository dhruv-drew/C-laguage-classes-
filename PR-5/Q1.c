#include<stdio.h>
int main(){

    int len;
    printf("Enter the array's size: ");
    scanf("%d",&len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Negative elements from an Array: ");
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d",arr[i]);
        }
        
    }
    
    

    return 0;
}