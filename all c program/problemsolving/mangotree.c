#include <stdio.h>

int main() {
    int r, c, t;
    scanf("%d%d%d", &r, &c, &t);

    // Calculate row and column of tree t
    int row = (t - 1) / c + 1;
    int col = (t - 1) % c + 1;

    if (row == 1 || col == 1 || col == c) {
        printf("It is a mango tree\n");
    } else {
        printf("It is not a mango tree\n");
    }

    return 0;
}
