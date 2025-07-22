#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // input without spaces

    int i = 0;
    while (str[i] != '\0') {
        count++;  // print each character with a space
        i++;
    }
    printf("string count value is: %d", count);

    return 0;
}
