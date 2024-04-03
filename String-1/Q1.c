#include<stdio.h>
int main(){

    char arr[] = "hello world";

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