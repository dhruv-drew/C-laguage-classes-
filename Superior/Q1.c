#include<stdio.h>
main(){
    int arr_size;
    printf("Enter the size of array: ");
    scanf("%d",&arr_size);

    int arr[arr_size];
    int sum = 0;

    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter number: ",i);
        scanf("%d",&arr[i]);        
    }
    
    for (int i = 0; i < arr_size; i++)
    {
        sum += arr[i];
    }
    printf("The sum of numbers you entered is %d.",sum);
    
    
}