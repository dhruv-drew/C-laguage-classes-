#include<stdio.h>
int main(){
    int f = 0, s=1,n,j; //j will be the user input //and n will be the tamparory variable.
    printf("Enter the value :");
    scanf("%d",&j);
    for (int i = 0; i <= j ; i++)
    {
        /* code */
        printf("%d\n",f);
        n = f + s;
        f = s;
        s = n;
    }
    

    return 0;
}