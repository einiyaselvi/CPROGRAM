#include <stdio.h>
#include <string.h>

struct lab {
    int totalcomputer;
    int usedcomputer;
    int ram;
    int price;
    char computermodel[50];  
};  
int main() { 
    
    struct lab computer;

    printf("Enter totalcomputer: ");
    scanf("%d", &computer.totalcomputer);

    printf("Enter usedcomputer: ");
    scanf("%d", &computer.usedcomputer);

    printf("Enter computermodel: ");
    scanf("%s", computer.computermodel);  

    printf("Enter ram: ");
    scanf("%d", &computer.ram);  
    
    printf("Enter price: ");
    scanf("%d", &computer.price);

    // Output
    printf("\n--- Computer Lab Info ---\n");
    printf("Total Computers: %d\n", computer.totalcomputer);
    printf("Used Computers: %d\n", computer.usedcomputer);
    printf("Model: %s\n", computer.computermodel);
    printf("RAM: %d GB\n", computer.ram);
    printf("Price: %d\n", computer.price);
    
    return 0;
}
