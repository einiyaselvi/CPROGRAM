#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the size of the matrix (rows and columns): ");
    scanf("%d %d", &r, &c); // Corrected

    int arr[r][c];

    // Input elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
