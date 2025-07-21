#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num, revNum, squareOriginal, squareReversed, revSquare;

    printf("Enter a number: ");
    scanf("%d", &num);

    squareOriginal = num * num;
    revNum = reverse(num);
    squareReversed = revNum * revNum;
    revSquare = reverse(squareReversed);

    if (squareOriginal == revSquare)
        printf("Adam Number\n");
    else
        printf("Not an Adam Number\n");

    return 0;
}
