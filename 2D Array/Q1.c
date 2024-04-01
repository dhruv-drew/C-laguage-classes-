#include<stdio.h>
int main(){

    int row,col;
    printf("Enter the array's rows: ");
    scanf("%d",&row);
    printf("Enter the array's columns: ");
    scanf("%d",&col);

    int arr[row][col];
    float avg = 0;
    float sum = 0;

    printf("Enter the array's row size: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        
    }
    avg += sum/(row*col);
    printf("Average of an Array: %f",avg);
    

    return 0;
}