#include <stdio.h>
main()
{
    int arr_size;
    printf("Enter the size of array: ");
    scanf("%d", &arr_size);

    int arr[arr_size];
    int even=0, odd=0;

    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter number: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }

    printf("The even numbers in the array is %d.\n",even);
    printf("The odd numbers in the array is %d.\n",odd);
}