#include <stdio.h>
calculateArea(int length, int width)
{
    int sqr_of_rect = length * width;

    return sqr_of_rect;
}

main()
{
    int length, width;

    printf("Enter the length : ");
    scanf("%d", &length);
    
    printf("Enter the width : ");
    scanf("%d", &width);

    printf("The srqure of the triangle is %d.",calculateArea(length, width));
}