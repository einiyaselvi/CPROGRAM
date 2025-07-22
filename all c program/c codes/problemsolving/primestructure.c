#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int num = i * (i + 1);
        printf("%d ", num);
    }
}