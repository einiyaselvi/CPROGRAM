#include <stdio.h>
int main(){
int r, c;
int i ,j, count = 0;
printf("Enter the row: ");
scanf("%d", &r);
printf("Enter the column: ");
scanf("%d", &c);

int a[r][c];


printf("Enter the elements of the first matrix:\n");
for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
        scanf("%d", &a[i][j]);
    }
}

printf("Enter the elements of the second matrix:\n");
int b[r][c];
for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
        scanf("%d", &b[i][j]);
    }
}


printf("The two matrices are equal: ");
for (i = 0; i < r; i++) {       
    for (j = 0; j < c; j++) {
        if (a[i][j] == b[i][j]) {
            count++;
        }
    }
}

if (count == r * c) {
    printf("Yes\n");
} else {
    printf("No\n");
}
return 0;


}
