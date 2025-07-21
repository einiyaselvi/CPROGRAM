#include <stdio.h>

int sumOfSquares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int num, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 1 && temp != 4) {
        temp = sumOfSquares(temp);
    }

    if (temp == 1)
        printf("Happy Number\n");
    else
        printf("Not a Happy Number\n");

    return 0;
}
