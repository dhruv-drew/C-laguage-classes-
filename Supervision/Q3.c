#include<stdio.h>

enum weekdays{
    Sunday, Monday, Tuseday, Wednesday, Thursday, Friday, Saturday
}s[7];

main(){
    for (int i = Sunday; i <= Saturday; i++)
    {
        printf("%d ",i);
    }
}