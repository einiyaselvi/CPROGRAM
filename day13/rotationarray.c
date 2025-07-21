#include<stdio.h>
int main() {
    int n, rotate;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the Value: ");
        scanf("%d", &a[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &rotate);
    rotate = rotate % n;
    for(int r = 0; r < rotate; r++) {
        int temp = a[0];
        for(int i = 0; i < n - 1; i++)
            a[i] = a[i + 1];
        a[n - 1] = temp;
    }
    printf("The Rotated Array is: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}