#include <stdio.h>

int main() {
    FILE *fp;
    char ch;  // Declare character variable

    fp = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\C program\\file handling\\fh.txt", "r");
    if (fp == NULL) {
        printf("#Error opening file.\n");
    } else {
        printf("File opened successfully.\n");

        while (1) {
            ch = fgetc(fp);

            if (ch == EOF)
                break;

            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}
