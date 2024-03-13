#include <stdio.h>
int main()
{
    printf("----------menu----------\n");
    printf("\n");
    printf("Enter 1 for English\n");
    printf("Enter 2 for Hindi\n");
    printf("Enter 3 for Gujarati\n");
    printf("\n");
    int a;
    printf("Enter your choice :");
    scanf("%d", &a);
    printf("\n");


    //main switch case which gives you option for which laguage you need the opitions in//

    switch (a)
    {
    case 1:
        //this switch case gives another switch case which gives you opition for the type of recharge and it is simmiler in the other cases as well//
        printf("Enter 1 for Internet Recharge\n");
        printf("Enter 3 for Top-up Recharge\n");
        printf("Enter 2 for Special Recharge\n");
        int english_choice;
         printf("\n");
        printf("Enter your choice :");
        scanf("%d", &english_choice);

        switch (english_choice)
        {
        case 1:
            printf("You have succesfully done a Internet Recharge\n");
            break;

        case 2:
            printf("You have succesfully done a Top-up Recharge\n");
            break;

        case 3:
            printf("You have succesfully done a Special Recharge\n");
            break;

        default:
            printf("Not a valid input\n");
            break;
        }
        break;
    case 2:
        printf("Internet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        int hindi_choice;
         printf("\n");
        printf("Enter your choice :");
        scanf("%d",&hindi_choice);

        switch (hindi_choice)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya hai.\n");
            break;
        case 2:
            printf("Aapne safaltapurvak Top-up Recharge kar liya hai.\n");
            break;
        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya hai.\n");
            break;
        
        default:
            printf("Not a valid Input\n");
            break;
        }
        break;
    case 3:
        printf("Internet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 3 dabavo\n");
        int Gujarati_choice;
         printf("\n");
        printf("Enter your choice :");
        scanf("%d",&Gujarati_choice);

        switch (Gujarati_choice)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe.");
            break;
        case 2:
            printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe.");
            break;
        
        default:
            printf("Not a valid Input\n");
            break;
        }
        break;
    default:
            printf("Not a valid Input\n");
            break;
    }

    return 0;
}