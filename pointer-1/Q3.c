#include <stdio.h>

swap(int *a, int *b)
{
    int *t;
    t = *a;
    *a = *b;
    *b = t;

    printf("After swaping:\n");
    printf("x : %d\n", *a);
    printf("y : %d\n", *b);

    printf("\n\n");
}

main()
{
    int x, y;

    printf("Enter the first value :");
    scanf("%d", &x);

    printf("Enter the second value :");
    scanf("%d", &y);

    printf("Before swaping:\n");
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    printf("\n");

    swap(&x, &y);
}