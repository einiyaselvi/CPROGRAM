#include <stdio.h>

int main() {
    int arr[100], n, i, j, isDuplicate;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Distinct elements are:\n");
    for(i = 0; i < n; i++) {
        isDuplicate = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
