#include <stdio.h>
#include <string.h>  // Needed for strlen()

int main() {
    char str[15];
    char s;  
    int count = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the character to search: ");
    scanf(" %c", &s);  // space before %c to handle newline

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == s) {
            count++;  // count occurrences
        }
    }

    if (count == 0) {
        printf("Not found\n");
    } else {
        printf("Found %d times\n", count);
    }

    return 0;
}
