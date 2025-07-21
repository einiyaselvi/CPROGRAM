#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the Values: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the limite: ");
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        printf("Enter the Values: ");
        scanf("%d",&b[i]);
    }
    int sum[n+m];
    for(int i=0;i<n;i++){   
     sum[i]=a[i]+b[i];
    }
    printf("The Sum of the two Arrays is: ");
    for(int i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
    printf("\n");
    return 0;
}