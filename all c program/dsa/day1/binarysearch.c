#include <stdio.h>

int main() {
    int arr[100], n, key, low, high, mid;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("Not found\n");
    return 0;
}
