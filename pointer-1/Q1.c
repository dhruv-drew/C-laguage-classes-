#include<stdio.h>
max(int *a, int *b){
    if (*a > *b)
    {
        printf("%d is maximum.\n",*a);
    }
    else{
        
        printf("%d is maximum.\n",*b);
    }
    
}
main(){
    int a,b;

    printf("Enter the first value :");
    scanf("%d",&a);

    printf("Enter the second value :");
    scanf("%d",&b);

    max(&a,&b);
}