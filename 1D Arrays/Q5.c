#include<stdio.h>
int main(){
    int arr[5];
    int prod=1;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
    if (arr[i] % 2 == 0)
    {
        prod *= arr[i];
        printf("%d is an odd number.\n",arr[i]);
    }
    }
    printf("%d\n",prod);
    
    

    return 0;
}