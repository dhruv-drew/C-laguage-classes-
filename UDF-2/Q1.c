#include<stdio.h>
void sum(int row, int number[]){
    int sum =0;
    for (int i = 0; i < row; i++)
    {
        sum += number[i];
    }
        printf("%d \n",sum);
    
}
void main(){
    int row;
    printf("Enter rows: ");
    scanf("%d",&row);
    int number[row];
    for (int i = 0; i < row; i++)
    {
        /* code */
        printf("number[%d]: ",i);
        scanf("%d",&number[i]);
    }
    

    sum(row,number);
}