#include <stdio.h>

int main() {
    int a[100], n, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n); 

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {  
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }

    return 0;
}
