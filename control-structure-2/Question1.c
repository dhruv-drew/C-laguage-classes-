#include <stdio.h>
int main()
{
    int a = 5, b = 3, c = 20;

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