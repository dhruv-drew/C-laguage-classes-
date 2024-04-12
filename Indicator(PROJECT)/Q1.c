#include<stdio.h>
int cube_of_num(int *num){
    *num = *num * *num * *num;
    return *num;
}
main(){
    int n ;
    printf("Enetr a number: ");
    scanf("%d",&n);

    printf("The cube is %d.",n,cube_of_num(&n));
}