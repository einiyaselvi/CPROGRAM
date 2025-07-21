#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for(i = 1; i <= 2 * n - 1; i++) {
        int stars = (i <= n) ? i : 2 * n - i;

        for(j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
