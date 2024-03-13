#include<stdio.h>
main(){
    int a,b,c;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2st number :");
    scanf("%d",&b);
    printf("Enter the 3st number :");
    scanf("%d",&c);

    (a<b ) ? (a<c) ? printf("%d is min",a) : printf("%d is min",c) : (b<c) ? printf("%d is min",b) : printf("%d is min",c); 

    return 0;
}