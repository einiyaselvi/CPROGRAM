#include <stdio.h>

int main() {
    FILE * fh;

    fh = fopen("fh.txt","r");
    char str;
    if (fh == NULL) {
        printf("Not found\n");
    } else {
        //fgets(str, 5, fh);
        str=getc(fh);
        printf("%c", str);
    }

    return 0;
}
