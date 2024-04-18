#include<stdio.h>
main(){
    int arr_size;
    printf("Enter the size of array: ");
    scanf("%d",&arr_size);

    int arr[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter number: ",i);
        scanf("%d",&arr[i]);        
    }
    int max = arr[0];
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
                
    }
    printf("%d is the maximum number.",max);
    
}