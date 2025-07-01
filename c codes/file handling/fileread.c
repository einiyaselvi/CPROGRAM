#include <stdio.h>

int main() {
    FILE * fh;

    fh = fopen("C:\Users\HP\OneDrive\Desktop\C program\file handling\fh.txt", "r");
    if (fh == NULL) {
        printf("Not found\n");
    } else {
        printf("File found\n");
    }

    return 0;
}
