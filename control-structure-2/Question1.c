#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    printf("Enter c :");
    scanf("%d", &c);
    printf("\n");
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    printf("\n");

    if (a < b)
    {
        if (a < c)
        {
            printf("A is min");
        }
        else
        {
            printf("C is min");
        }
    }
    else
    {
        if (b < c)
        {
            /* code */
            printf("B is min");
        }
        else
        {

            printf("C is min");
        }
    }

    return 0;
}