#include <stdio.h>
#include <string.h>

typedef struct {  
    int ram;
    char model[15];
    int price;
} mobile;

void print(mobile n) {
    printf("Model: %s\n", n.model);
}

int main() {
    mobile m1 = {8, "iPhone14", 70000}; 
    mobile m2 = {6, "SamsungA5", 30000};
    mobile m3 = {4, "Redmi9", 15000};

    print(m1);
    
    return 0;
}





