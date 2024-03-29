#include<stdio.h>
int main(){
    int arr[5];
    int sum =0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        sum += arr[i];

    }
        sum /= 5;
        printf("%d\n",sum);
    
    

    return 0;
}