#include <stdio.h>
int main()
{

    int len;
    printf("Enter the array's size: ");
    scanf("%d", &len);
    int arr[len][len];

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("------------------------");
    printf("\n");



    int row_num, row_sum = 0;
    printf("Enter the row number: ");
    scanf("%d", &row_num);
    printf("\n");
    printf("------------------------");
    printf("\n");


    for (int j = 0; j < len; j++)
    {
        printf("Elements of row :%d \n", arr[row_num][j]);
    }

    for (int j = 0; j < len; j++)
    {
        row_sum += arr[row_num][j];
    }

    printf("The sum of row %d: %d\n", row_num, row_sum);
    printf("\n");
    printf("------------------------");
    printf("\n");
    


    int col_num, col_sum = 0;
    printf("Enter the column number: ");
    scanf("%d", &col_num);
    printf("\n");
    printf("------------------------");
    printf("\n");

    for (int j = 0; j < len; j++)
    {
        printf("Elements of column %d \n", arr[j][col_num]);
    }

    for (int j = 0; j < len; j++)
    {
        col_sum += arr[j][col_num];
    }

    printf("The sum of a column %d: %d\n", col_num, col_sum);
    printf("\n");



    return 0;
}