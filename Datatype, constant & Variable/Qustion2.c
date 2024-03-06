#include <stdio.h>
float main()
{
    float r, Circumference;
    // float pie = 3.14159;

    printf("Enter the Radius of the circle : ");
    scanf("%f", &r);

    Circumference = 2 * 3.14159 * r;

    printf("The Circumference of the cirlce is : %f \n",Circumference);


    // printf("%d", 2*3.14*5);

    return 0;
}