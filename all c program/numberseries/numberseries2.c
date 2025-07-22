//0, 2, 8, 14, 24


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    arr[0] = 0;
    for(int i = 1; i < n ;i++){
        arr[i] = arr[i - 1] * i + 2;
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

