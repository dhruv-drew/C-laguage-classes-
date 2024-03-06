#include <stdio.h>
int main()
{
    int p, time, rate, ans;

    printf("Enter the Principla :");
    scanf("%d",&p);
    
    printf("Enter the Time :");
    scanf("%d",&time);

    printf("Enter the Rate :");
    scanf("%d",&rate);

    ans = (p * rate * time) / 100;

    printf("The Intrest is : %d \n", ans);

    return 0;
}