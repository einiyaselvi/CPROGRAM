#include <stdio.h>

int main() {
    int num, a;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Even digits: ");
    int b = num;
    while(b > 0) {
        a = b % 10;
        if(a % 2 == 0){
            printf("%d ", a);
        }
        b /= 10;
    }

    printf("\nOdd digits: ");
    b = num;
    while(b > 0) {
        a = b % 10;
        if(a % 2 != 0)
            printf("%d ", a);
        b /= 10;
    }

    return 0;
}
