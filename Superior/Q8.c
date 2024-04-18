#include<stdio.h>
main(){
    int size1;
    printf("Enter the first arrays size: ");
    scanf("%d",&size1);

    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("Enter the numbers; ");
        scanf("%d",&arr1[i]);
    }
    int size2;
    printf("Enter the first arrays size: ");
    scanf("%d",&size2);

    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("Enter the numbers; ");
        scanf("%d",&arr2[i]);
    }
    

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ",arr1[i]);
                break;
            }
            
        }
        
    }
    
}