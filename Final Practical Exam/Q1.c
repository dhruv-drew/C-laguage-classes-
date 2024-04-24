#include<stdio.h>
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    switch (n > 0)
    {
    case 1:
    printf("%d is a positive number.",n);
        break;

    case 0:
        switch (n < 0)
        {
        case 1:
            printf("%d is a constant number.",n);
            break;
        case 0:
        printf("%d is zero.",n);
            break;
        
        }     
    break;
    }
    
}