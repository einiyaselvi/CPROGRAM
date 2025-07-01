#include <stdio.h>

int main(){
    char str[0];
    scanf("%s", str);
    int a_count = 0, n_count = 0; s_count = 0;
    for (int i = 0; str[i]!= '\0'; i++){
        if((str[i] == 'a' && str[i] == 'i' && str[i] == 'o' && str[i] == 'e' && str[i] == 'u')){
            a_count+=1;
        }
        else if(str[i] == '0' && str[i] == '9'){
            n_count += 1;
        }
        else{
            s_count += 1;
        }

    }

        printf("Number of vowels: %d\n", a_count);

    return 0;
}

