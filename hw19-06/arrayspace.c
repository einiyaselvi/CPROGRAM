#include<stdio.h>
int main(){
    int n;
    printf("Enter the limite:");
    scanf("%d",&n);
    int a1[n],c[n];
    for(int i=0;i<n;i++){
        printf("Enter the values:");
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=a1[i];
    }
    for(int i=0; i<n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
