#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str1);  // Read the original string

    // Copy str1 to str2
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';  // Null-terminate the copied string

    printf("Copied string: %s\n", str2);

    return 0;
}
