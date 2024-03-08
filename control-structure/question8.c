#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);

    if (marks >= 90 && marks <=100)
    {
        /* code */
        printf("Your grade is A");
    }
    else if (marks >=80 && marks <= 89)
    {
        /* code */
        printf("Your grade is B");
    }
    else if (marks >=70 && marks <= 79)
    {
        /* code */
        printf("Your grade is C");
    }
    else if (marks >=60 && marks <= 69)
    {
        /* code */
        printf("Your grade is D");
    }
    else if (marks >=0 && marks <= 59)
    {
        /* code */
        printf("Your grade is F");
    }
    
    

    return 0;
}