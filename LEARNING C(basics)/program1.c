//convert Fahrenheit to Celsius
//(f - 32) * (5.0 / 9.0)  --> formula

#include<stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0);
    printf("Celsius: %.2f\n", c);
    return 0;
}
