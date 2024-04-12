#include<stdio.h>
swap(int *num1, int *num2, int *num3){
    int *t =  *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = t;

    printf("\n");
    
    printf("After swaping:\n");
    printf("A = %d\n",*num1);
    printf("B = %d\n",*num2);
    printf("C = %d\n",*num3);
}


main(){
    int num_1, num_2, num_3;

    printf("Enetr the 1st number: ");
    scanf("%d",&num_1);

    printf("Enetr the 2st number: ");
    scanf("%d",&num_2);

    printf("Enetr the 3st number: ");
    scanf("%d",&num_3);

    printf("Before swaping:\n");
    printf("A = %d\n",num_1);
    printf("B = %d\n",num_2);
    printf("C = %d\n",num_3);

    
    swap(&num_1, &num_2, &num_3);
}