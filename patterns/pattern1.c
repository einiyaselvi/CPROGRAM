#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper triangle
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower triangle
    for (int i = n - 1; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
