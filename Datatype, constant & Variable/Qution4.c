#include<stdio.h>
int main(){
    const PI = 3.14159;
    float R, ans ;

    printf("Enter the Radius :");
    scanf("%f",&R);

    ans = 2 * PI * R;

    printf("%f",ans);
    return 0;
}