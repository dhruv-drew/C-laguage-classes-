#include<stdio.h>
int main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);

    if (year % 4 == 0)
    {
        /* code */
        printf("The year is a leapyear.");
    }
    else{

        printf("The year is not a leapyear.");
    }
    

    return 0;
}