#include<stdio.h>
min(int *a, int *b){
    if (*a < *b)
    {
        printf("%d is minimum.\n",*a);
    }
    else{
        
        printf("%d is minimum.\n",*b);
    }
    
}
main(){
    int a,b;

    printf("Enter the first value :");
    scanf("%d",&a);

    printf("Enter the second value :");
    scanf("%d",&b);

    min(&a,&b);
}