#include<stdio.h>
int main(){
    int number;
    printf("enter a number :");
    scanf("%d",&number);

    if (number < 0 || number ==0 || number > 0)//checking if any of these condition is being true
    {
        if (number == 0)//cheaking if the number is equal to zero
        {
            /* code */
            printf("The number %d is nutaral.",number);
        }
        else if (number < 0)//cheaking if the number is less to zero
        {
            /* code */
            printf("The number %d is nagative.",number);
        }
        else if (number > 0)//cheaking if the number is more to zero
        {
            /* code */
            printf("The number %d is positive.",number);
        }
    }
    

    return 0;
}