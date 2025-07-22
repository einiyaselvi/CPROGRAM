#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime Digits: ");
    while (num > 0) {
        digit = num % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            printf("%d ", digit);
        }
        num /= 10;
    }

    return 0;
}
