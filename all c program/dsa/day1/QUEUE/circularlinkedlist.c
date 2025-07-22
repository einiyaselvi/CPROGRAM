// linked list implementation of circular queue in C
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* front = NULL;
Node* rear = NULL;

int isEmpty() {
    return front == NULL;
}

void enqueue(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
   
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty()) {
        front = rear = newNode;
        rear->next = front; 
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}

int dequeue() {

    int value;
    if (front == rear) { 
        value = front->data;
        free(front);
        front = rear = NULL;
    } else {
        Node* temp = front;
        value = temp->data;
        front = front->next;
        rear->next = front;
        free(temp);
    }
    return value;
}

void display() {
    Node* temp = front;
    printf("Queue: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int value;
        scanf("%d", &value);
        enqueue(value);
    }
    display();
    printf("Dequeued value: %d\n", dequeue());
    display();
    return 0;
}


/*
Enter the number:5
1
2
3
4
5
Queue: 1 2 3 4 5 
Dequeued value: 1
Queue: 2 3 4 5
*/