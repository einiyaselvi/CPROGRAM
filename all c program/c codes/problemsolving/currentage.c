#include <stdio.h>

int main(){
    int birth, current, age;
    printf("enter the birthday year: ");
    scanf("%d", &birth);
    
    printf("enter the current year: ");
    scanf("%d", &current);
    
    if (current >= birth){
        age = current - birth;
    }
    else{
        age = (100 - birth) + current;
    }
    printf("the age is: %d", age);
    return 0;
}