#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, product = 1;

    scanf("%d", &n);

    int arr[n]; // Declare array with size n

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    for (int i = 0; i < n; i++) {
        product *= arr[i]; // Multiply each element
    }

    printf("%d", product); // Corrected format and removed '&'
    
    return 0;
}
