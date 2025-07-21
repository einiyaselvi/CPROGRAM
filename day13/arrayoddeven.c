#include<stdio.h>

int main() {
    int n;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the Value: ");
        scanf("%d", &a[i]);
    }
    printf("Even Numbers: ");
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd Numbers: ");
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return 0;
}