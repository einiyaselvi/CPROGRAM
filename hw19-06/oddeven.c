#include <stdio.h>

int main() {
    int num, digit, odd = 0, even = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }

    printf("Odd = %d, Even = %d\n", odd, even);
    return 0;
}
