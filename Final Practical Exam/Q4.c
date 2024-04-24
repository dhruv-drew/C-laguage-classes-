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

    int sqr[n];

    for (int i = 0; i < n; i++)
    {
        sqr[i] = arr[i]*arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",sqr[i]);
    }
        
}