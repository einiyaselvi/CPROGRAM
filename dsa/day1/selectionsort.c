//METHOD ONE
// This program inserts an element at a specified position in an array.


#include <stdio.h>

int main(){
    int n, arr[100], pos, value;
    printf("enter the size of the array: \n");
    scanf("%d", &n);
    
    printf("Enter the array element: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the pos: \n");
    scanf("%d", &pos);
    
    printf("Enter the value: \n");
    scanf("%d", &value);
    
    for (int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = value;
    n++;
    
    printf("After insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}


//METHOD TWO

#include <stdio.h>

int main() {
    int n, arr[100], pos, value, temp;
    
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d):\n", n);
    scanf("%d", &pos);

    printf("Enter the value:\n");
    scanf("%d", &value);

    // Shift elements using temp
    for (int i = n; i > pos; i--) {
        temp = arr[i - 1];  // save previous value
        arr[i] = temp;      // assign to next position
    }

    arr[pos] = value;  // insert new value
    n++;  // increase array size

    printf("After insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
 

