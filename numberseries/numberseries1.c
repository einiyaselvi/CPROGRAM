int main(){
    int i;
    int n = 4;
    printf("%d", n);
    for(int i = 0; i < 5;i++){
        n = ((n +1) - n) * (n + 1);
        printf("%d ", n);
    }
    return 0;
}

