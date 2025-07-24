//5 subject marks and total marks & average mark

#include <stdio.h>
int main(){
    int tam, eng, maths, sci, soc, total;
    float avg;
    printf("Enter marks for tam:");
    scanf("%d", &tam);

    printf("Enter marks for eng:");
    scanf("%d", &eng);
    printf("Enter marks for maths:");
    scanf("%d", &maths);
    printf("Enter marks for sci:");
    scanf("%d", &sci);
    printf("Enter marks for soc:");
    scanf("%d", &soc);

    total = tam + eng + maths + sci + soc;
    avg = total / 5;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", avg);


    return 0;
}