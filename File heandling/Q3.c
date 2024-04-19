#include<stdio.h>
main(){
    FILE *p;
    p = fopen("writemethod.txt","a");

    char data[100];

    if (p == NULL)
    {
        printf("Can't open file.");
    }else{
        printf("Open file.");
        printf("Enter something: \n\n");
        gets(data);
        fputs(data,p);
    }
    
}