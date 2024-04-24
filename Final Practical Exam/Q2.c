#include<stdio.h>
main(){
    int n;
    printf("Enter the length: ");
    scanf("%d",&n);

    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d is the minimum of all. ",min);
    
    
}