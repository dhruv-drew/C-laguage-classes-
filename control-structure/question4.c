#include<stdio.h>
int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if (age >= 18)
    {
        /* code */
        printf("You are eligible for voting.");
    }
    else if (age < 18)
    {
        /* code */
        printf("You are not eligible for voting.");

    }
    
    

    return 0;
}