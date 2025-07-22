#include <string.h>

int main(){
    int a, b,c;
    scanf("%d %d", &a,&b);

    c = a + b;

    printf("%d", c);
    c=a-b;
    printf("%d", c);
    c=a*b;
    printf("%d", c);
    c=a/b; // Division operation
    printf("%d", c);
    c=a%b; // Modulus operation
    printf("%d", c);

}