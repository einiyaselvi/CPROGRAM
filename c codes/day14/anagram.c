#include <stdio.h>
#include <string.h>
#include <ctype.h>

int anagram(char str1[], char str2[]) {
    int count[200] = {0};

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    for (int i = 0; i < 200; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("String 1: ");
    scanf("%s", str1);

    printf("String 2: ");
    scanf("%s", str2);

    if (anagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}
