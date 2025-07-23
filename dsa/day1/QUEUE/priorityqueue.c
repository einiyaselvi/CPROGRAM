// Priority Queue Implementation in C
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct Node {
    int data;
    int priority;
    struct Node* next;
} Node;

typedef struct PriorityQueue {
    Node* front;
} PriorityQueue;

PriorityQueue* createPriorityQueue() {
    PriorityQueue* pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->front = NULL;
    return pq;
}

int isEmpty(PriorityQueue* pq) {
    return pq->front == NULL;
}

void enqueue(PriorityQueue* pq, int value, int priority) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->priority = priority;
    newNode->next = NULL;

    if (isEmpty(pq) || pq->front->priority < priority) {
        newNode->next = pq->front;
        pq->front = newNode;
    } else {
        Node* temp = pq->front;
        while (temp->next != NULL && temp->next->priority >= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void dequeue(PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Priority Queue is empty!\n");
        return;
    }
    Node* temp = pq->front;
    printf("Dequeued value: %d with priority: %d\n", temp->data, temp->priority);
    pq->front = pq->front->next;
    free(temp);
}

void display(PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Priority Queue is empty.\n");
        return;
    }
    Node* temp = pq->front;
    printf("Priority Queue elements:\n");
    while (temp != NULL) {
        printf("Value: %d, Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

int main(){
    int num;
    printf("Enter the number of elements to enqueue: ");
    scanf("%d", &num);

    PriorityQueue* pq = createPriorityQueue();
    for (int i = 0; i < num; i++) {
        int value, priority;
        printf("Enter value and priority for element %d: ", i + 1);
        scanf("%d %d", &value, &priority);
        enqueue(pq, value, priority);
    }

    display(pq);
    dequeue(pq);
    display(pq);
    return 0;
}

/*Enter the number of elements to enqueue: 5
Enter value and priority for element 1: 10
1
Enter value and priority for element 2: 20
2
Enter value and priority for element 3: 30
3
Enter value and priority for element 4: 40
4
Enter value and priority for element 5: 50
5
Priority Queue elements:
Value: 50, Priority: 5
Value: 40, Priority: 4
Value: 30, Priority: 3
Value: 20, Priority: 2
Value: 10, Priority: 1
Dequeued: 50 with priority 5
Priority Queue elements:
Value: 40, Priority: 4
Value: 30, Priority: 3
Value: 20, Priority: 2
Value: 10, Priority: 1
PS D:\Project\C program\C-Progarms\DSA\Queue\output> 
*/