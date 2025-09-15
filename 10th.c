#include <stdio.h>
int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 7; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}
