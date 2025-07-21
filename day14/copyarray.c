#include <stdio.h>

int main() {
    int a[100], b[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Read elements into array a
    }

    // Copy a[i] to b[i]
    for(i = 0; i < n; i++) {
        b[i] = a[i];
    }

    printf("Copied array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
