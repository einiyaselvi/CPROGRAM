#include <stdio.h>

int main() {
    int n, i, arr[100], index;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index to delete: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index. Deletion not possible.\n");
    } else {
       
        for (i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("The new array is:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
