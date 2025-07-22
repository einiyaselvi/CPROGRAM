#include <stdio.h>

int main() {
    int a[100], n,j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n); 

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

   
    for (int i = 0; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }

    return 0;
}

