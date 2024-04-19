#include<stdio.h>
main(){
    FILE *p;
    p = fopen("writemethod.txt","w");

    char data[100];

    if (p == NULL)
    {
        printf("Can't open file.");
    }else{
        printf("Open file.");

        fputs("Hello this is Dhruv Panchasara.",p);
    }
    
}