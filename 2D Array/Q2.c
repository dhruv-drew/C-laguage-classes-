#include<stdio.h>
int main(){

    int row_col;
    printf("Enter the array's rows: ");
    scanf("%d",&row_col);
    

    int arr[row_col][row_col];
    int sum = 0;

    printf("Enter the array's row size: \n");
    for (int i = 0; i < row_col; i++)
    {
        for (int j = 0; j < row_col; j++)
        {
            printf("arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < row_col; i++)
    {
        for (int j = 0; j < row_col; j++)
        {
            if (i == j)
            {
                /* code */
                sum += arr[i][j];
            }
            
        }
        
    }
    printf("Average of an Array: %d",sum);
    

    return 0;
}