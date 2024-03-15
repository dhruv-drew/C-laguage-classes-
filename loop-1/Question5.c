#include<stdio.h>
int main(){
    int year1,year2;
    printf("Enter the first year :");
    scanf("%d",&year1);
    printf("Enter the Second year :");
    scanf("%d",&year2);
 
    while (year1 <= year2)
    {
        /* code */
        if (year1 % 4 == 0)
        {
        printf("%d\n",year1);
            /* code */
        }
        
        // printf("%d\n",year1);
        year1++;
    }
    
    


    return 0;
}