#include <stdio.h>
#include <string.h>

struct mobile{
    int ram;
    char model[15];
    int price;
}

main(){
    struct mobile m1;
    printf("Enter mobile ram: ");
    scanf("%d", &m1.ram);
    
    
    printf("Enter mobile model: ");
    scanf("%s", &m1.model);
    strcpy(m1.model, "14 pro");
    
    printf("ram is %d\n", m1.ram);
    printf("nodel is %s\n", m1.model);
}

