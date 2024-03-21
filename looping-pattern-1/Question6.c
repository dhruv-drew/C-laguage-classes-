#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        for (int j = 5; j >= i; j--)
        {
            /* code */
            printf("%d ", j % 2);
        }
        printf("\n");
    }
}