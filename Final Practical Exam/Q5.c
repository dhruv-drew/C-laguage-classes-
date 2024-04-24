#include <stdio.h>
#include <string.h>

struct House {
    int room_number;
    int established_year;
    char city_name[50];
};

int main() {
    int n;
    
    printf("Enter the number of houses: ");
    scanf("%d", &n);
    
    struct House houses[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nHouse %d details:\n", i + 1);
        printf("Room Quantity: ");
        scanf("%d", &houses[i].room_number);
        printf("Established Year: ");
        scanf("%d", &houses[i].established_year);
        printf("City: ");
        scanf("%s", houses[i].city_name);
    }
    
    printf("\nDetails of %d houses:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nHouse %d:\n", i + 1);
        printf("Room Quantity: %d\n", houses[i].room_number);
        printf("Established Year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city_name);
        printf("\n");
    }
    
    return 0;
}
