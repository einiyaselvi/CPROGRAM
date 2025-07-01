#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abc def ghi";
    char str2[] = "def";

    char *ptr = strstr(str1, str2);  // check if str2 is in str1

    if (ptr != NULL) {
        printf(" present \n");
    } else {
        printf("No present substring\n");
    }

    return 0;
}
