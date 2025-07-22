#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr1[n], arr2[n]; // Declare arrays with size n

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]); // Input into arr1
    }

    // Copy arr1 to arr2
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Print arr2
    printf("Copied array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
