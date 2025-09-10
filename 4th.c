#include <stdio.h>

int main() {
    int rows = 3;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int s = 0; s < (rows - i - 1); s++) {
            printf(" ");
        }

        // Print stars (odd numbers: 1, 3, 5)
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
