#include<stdio.h>
int main() 
    int n, i, j;

    // Prompt user for input
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print the lower left triangle
    for(i = 1; i <= n; i++) {
        for = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
