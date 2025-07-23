//QUEUE IMPLEMENTATION USING LINKED LIST
typedef struct node {
    int data;
    struct node* next;
} node;
typedef struct queue {
    node* front;
    node* rear;
} queue;
queue* createQueue() {
    queue* q = (queue*)malloc(sizeof(queue));
    q->front = q->rear = NULL;
    return q;
}
void enqueue(queue* q, int val) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val;
    newNode->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("%d enqueued\n", val);
}
void dequeue(queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    printf("%d dequeued\n", temp->data);
    free(temp);
}
void display(queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    node* temp = q->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    queue* q = createQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    display(q);
    dequeue(q);
    display(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    return 0;
}