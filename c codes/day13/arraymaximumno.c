#include<stdio.h>
int main(){
    int n, max1, max2;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the Values: ");
        scanf("%d", &a[i]);
    }
    max1 = max2 = a[0];
    for(int i=1;i<n;i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2 && a[i] != max1){
            max2 = a[i];
        }
    }
    printf("The 2nd Maximum Element is: %d", max2);
    return 0;
}
