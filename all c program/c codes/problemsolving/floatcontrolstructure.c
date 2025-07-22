//0.5 1.5 4.5 13.5 40.5 

#include <stdio.h>

int main() {
    float term = 0.5;
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for(i = 0; i < n; i++) {
        printf("%.1f ", term);
        term = term * 3;
    }

    return 0;
}
