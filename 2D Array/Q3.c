#include<stdio.h>
int main(){
    int arr[5][5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                printf("%d ",arr[i][j]);
                sum += arr[i][j];
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
        
    }
    printf(" The sum of boundary elements of an Array: %d",sum);
   
    return 0;
}