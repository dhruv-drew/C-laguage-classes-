#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);

    if (marks < 50)
    {
        /* code */
        printf("Sorry! You failed the exam better luck next time");
    }
    else if (marks >= 50)
    {
        printf("Congratulations! You have passed the exam");
        /* code */
    }
    
    

    return 0;
}