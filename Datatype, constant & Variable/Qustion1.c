#include<stdio.h>

int main(){
    int ratePerHour = 15;
    int hoursWorked, ans;

    printf("Enter the working hours of ths week : ");
    scanf("%d",&hoursWorked);

    ans = hoursWorked * ratePerHour;

    printf("Your salary for this week is: %d $ \n",ans);

    return 0;
}