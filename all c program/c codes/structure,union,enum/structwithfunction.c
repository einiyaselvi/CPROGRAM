#include <stdio.h>
#include <string.h>

struct mobile {
    int ram;
    char model[15];
    int price;
};

void print(struct mobile n) {
    printf("Model: %s\n", n.model);
}

int main() {
    struct mobile m1 = {8, "iPhone14", 70000};
    struct mobile m2 = {6, "SamsungA5", 30000};
    struct mobile m3 = {4, "Redmi9", 15000};

    print(m1);
    
    return 0;
}

