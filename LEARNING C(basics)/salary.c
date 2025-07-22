#include <stdio.h>
int main() {
    float b,d,h,gs;
    printf("Enter the b:");
    scanf("%f", &b);

    d=b*0.4;
    h=b*0.2;
    gs= b+d+h;
    printf("%0.2f\n", b);
    printf("%0.2f\n", h);
    printf("%0.2f\n", d);
    printf("%0.2f\n", gs);
    return 0;
}