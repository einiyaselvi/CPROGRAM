#include <stdio.h>

int main(){
    float kilo,inch,feet,centi,meter;
    printf("Enter the kilometres: ");
    scanf("%0.2f", &kilo);
    meter = kilo * 1000;
    centi = meter * 100;
    inch = centi / 2.5;
    feet = inch/12;

    printf("Entered Kilometres: %0.2f\n", kilo);
    printf("Converted to Metres: %0.2f\n", meter);      
    printf("Converted to Centimetres: %0.2f\n", centi);
    printf("Converted to Inches: %0.2f\n", inch);
    printf("Converted to Feet: %0.2f\n", feet);

    return 0;


}