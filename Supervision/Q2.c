#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char company[100];
    char model[100];
    int year;
    char color[100];
    int price;
    int mileage;
} s1[100];

main()
{

    int n;
    printf("Enter car number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter ID : ");
        scanf("%d", &s1[i].id);

        printf("Enter company : ");
        scanf("%s", &s1[i].company);

        printf("Enter model : ");
        scanf("%s", &s1[i].model);

        printf("Enter year : ");
        scanf("%d", &s1[i].year);

        printf("Enter color : ");
        scanf("%s", &s1[i].color);

        printf("Enyter price : ");
        scanf("%d", &s1[i].price);

        printf("Enter mileage : ");
        scanf("%d", &s1[i].mileage);

        
    }
printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n", s1[i].id);
        printf("COMPANY : %s\n", s1[i].company);
        printf("MODEL : %s\n", s1[i].model);
        printf("YEAR : %d\n", s1[i].year);
        printf("COLOR : %s\n", s1[i].color);
        printf("PRICE : %d\n", s1[i].price);
        printf("MILEAGE : %d\n", s1[i].mileage);
    }
}