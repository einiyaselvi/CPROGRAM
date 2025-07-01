#include <stdio.h>

int printLucas(int n) {
    int a = 2, b = 1, c;
    
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Lucas series: ");
    printLucas(terms);

    return 0;
}
