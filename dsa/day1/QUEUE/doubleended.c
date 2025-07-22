//Double-ended queue implementation in C
// Double-Ended Queue (Deque)
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct Deque {
    int arr[MAX];
    int front, rear;
} Deque;

Deque* createDeque() {
    Deque* deque = (Deque*)malloc(sizeof(Deque));
    deque->front = -1;
    deque->rear = -1;
    return deque;
}

int isFull(Deque* deque) {
    return ((deque->front == 0 && deque->rear == MAX - 1) ||
            (deque->front == deque->rear + 1));
}

int isEmpty(Deque* deque) {
    return (deque->front == -1);
}

int insertFront(Deque* deque, int value) {
    if (isFull(deque)) {
        printf("Deque overflow at front!\n");
        return -1;
    }
    if (isEmpty(deque)) {
        deque->front = deque->rear = 0;
    } else if (deque->front == 0) {
        deque->front = MAX - 1;
    } else {
        deque->front--;
    }
    deque->arr[deque->front] = value;
    return 0;
}

int insertRear(Deque* deque, int value) {
    if (isFull(deque)) {
        printf("Deque overflow at rear!\n");
        return -1;
    }
    if (isEmpty(deque)) {
        deque->front = deque->rear = 0;
    } else if (deque->rear == MAX - 1) {
        deque->rear = 0;
    } else {
        deque->rear++;
    }
    deque->arr[deque->rear] = value;
    return 0;
}

int deleteFront(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque underflow at front!\n");
        return -1;
    }
    int value = deque->arr[deque->front];
    if (deque->front == deque->rear) {
        deque->front = deque->rear = -1;
    } else if (deque->front == MAX - 1) {
        deque->front = 0;
    } else {
        deque->front++;
    }
    return value;
}

int deleteRear(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque underflow at rear!\n");
        return -1;
    }
    int value = deque->arr[deque->rear];
    if (deque->front == deque->rear) {
        deque->front = deque->rear = -1;
    } else if (deque->rear == 0) {
        deque->rear = MAX - 1;
    } else {
        deque->rear--;
    }
    return value;
}

void display(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque elements: ");
    int i = deque->front;
    while (1) {
        printf("%d ", deque->arr[i]);
        if (i == deque->rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int num, value;
    Deque* deque = createDeque();

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Enter value to insert at rear: ");
        scanf("%d", &value);
        insertRear(deque, value);
    }

    display(deque);

    printf("Front element deleted: %d\n", deleteFront(deque));
    printf("Rear element deleted: %d\n", deleteRear(deque));

    display(deque);

    free(deque);
    return 0;
}