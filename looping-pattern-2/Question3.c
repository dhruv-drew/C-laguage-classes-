#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {

        // Inner loop for spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" "); // Two spaces
        }

        // Inner loop for numbers
        for (j = 1; j <= i; j++) {
            printf("%d", rows - i + 1); // Printing the inverted number
        }

        printf("\n");
    }

    return 0;
}
