#include<stdio.h>
main(){
    FILE *p;
    p = fopen("demo.txt","r");

    char data[100];

    if (p == NULL)
    {
        printf("Can't open file.\n");
    }else{

        printf("Open file.");
        while (fgets(data , 50 , p) != NULL)
        {
            printf("%s",data);
        }
        
    }
    
}