#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the matrix (rows and columns): ");
    scanf("%d", &n); 

    int matrix[n][n];

    // Input elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n sum of rows");
    for (int i = 0; i < n; i++){
         int rowsum = 0;
         for (int j = 0; j < n; j++) {
            rowsum += matrix[i][j];
         }
         printf("Row %d sum = %d\n", i + 1, rowsum);
        }

    printf("\n sum of rows");
    for (int i = 0; i < n; i++){
         int colsum = 0;
         for (int j = 0; j < n; j++){
            colsum += matrix[j][i];
         }
         printf("Row %d sum = %d\n", i + 1, colsum);
    }
    printf("\n");

    return 0;
}
