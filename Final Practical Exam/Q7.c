#include <stdio.h>

int main() {
    int i, j;

    for (i = 10; i > 5; i--) {
        // Print the numbers
        for (j = 10; j >= i; j--) {
            printf(" %d ", i * i);
        }
        printf("\n");
    }

    return 0;
}
