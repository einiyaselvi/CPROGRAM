//swapping two numbers
#include <stdio.h>

int main(){
    
    int a, b , temp;
    scanf("%d %d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    
    printf(" The value is :%d %d", a,b);
    return 0;
    
}


//swapping three numbers
#include <stdio.h>

int main(){
    
    int a, b ,c, temp;
    scanf("%d %d %d", &a, &b, &c);
    temp = a;
    a=b;
    b=c;
    c=temp;
    
    printf(" The value is :%d %d %d", a,b,c);
    return 0;
    
}