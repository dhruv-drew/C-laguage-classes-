#include<stdio.h>
int main(){

    char arr[] = "HELLO WORLD";
    
    for (int i = 0; arr[i] != NULL; i++)
    {
        if (arr[i] >= 'A' && arr[i]<='Z')
        {
            arr[i]+= 32;
        }
        printf("%c",arr[i]);
    }
    

    return 0;
}