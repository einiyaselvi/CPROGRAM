#include <stdio.h>

int main(){
    int n, i, j, s, l;
    printf("Enter the star pattern size: ");
    scanf("%d", &n);

    for (int i = n ; i < = n; i++){
        if(i < 0){
            l = -i;
        }
        else{
            l = i;
        }
    }
    for (int s = 0; s < n - l; s++){
        printf(" ");
    }
    for (int j = 0; j < l + 1; j++){
        printf("* "); 
    }
    printf("\n");
    
    return 0;
}