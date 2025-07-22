#include <stdio.h>

int main() {
    FILE * fh;

    fh = fopen("C:\Users\HP\OneDrive\Desktop\C program\file handling\fh.txt", "r");
    char str;
    if (fh == NULL) {
        printf("Not found\n");
    } else {
        fgets(str, 5, fh);
    }

    return 0;
}
