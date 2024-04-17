#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char title[100];
    char author[100];
    char gener[100];
    char publisher[100];
    int publication_year;
    int price;
} s1[100];

main()
{

    int n;
    printf("Enter book number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter ID : ");
        scanf("%d", &s1[i].id);

        printf("Enter title : ");
        scanf("%s", &s1[i].title);

        printf("Enter author : ");
        scanf("%s", &s1[i].author);

        printf("Enter gener : ");
        scanf("%s", &s1[i].gener);

        printf("Enter publisher : ");
        scanf("%s", &s1[i].publisher);

        printf("Enter publication year : ");
        scanf("%d", &s1[i].publication_year);

        printf("Enyter price : ");
        scanf("%d", &s1[i].price);
    }
printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n", s1[i].id);
        printf("TITLE : %s\n", s1[i].title);
        printf("AUTOR : %s\n", s1[i].author);
        printf("GENER : %s\n", s1[i].gener);
        printf("PUBLISHER : %s\n", s1[i].publisher);
        printf("PUBLICATION YEAR : %d\n", s1[i].publication_year);
        printf("PRICE : %d\n", s1[i].price);
    }
}