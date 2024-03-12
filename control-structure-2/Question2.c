#include <stdio.h>
int main()
{
    int a, b, c, d;
    a = 100;
    b = 20;
    c = 25;
    d = 45;

    if (a > b)
    {
        /* code */
        if (a > c)
        {
            /* code */
            if (a > d)
            {
                /* code */
                printf("A is max");
            }
            else
            {
                if (d > b)
                {
                    /* code */
                    if (d > c)
                    {
                        /* code */
                        printf("D is max");
                    }
                }
            }
        }
        else
        {
            if (c > b)
            {
                /* code */
                if (c > d)
                {
                    /* code */
                    printf("C is max");
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            /* code */
            if (b > d)
            {
                /* code */
                printf("B is max");
            }
            else{
                printf("d is max");
            }
        }
        else{
            printf("c is max");
        }
    }
}