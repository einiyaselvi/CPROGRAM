//Circular Queue Implementation in C (enqueue)
#include <stdio.h>
#define MAX 100
int queue[MAX];
int front = -1, rear = -1;

int enqueue(int value){
    if((rear + 1) % MAX == front){
        printf("Queue is full\n");
        return -1;
    }
    if (front == -1) {
        front = 0; 
    }
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    return 0;

}
int display(){
    if (front == -1) {
        printf("Queue is empty\n");
        return 0;
    }
    int i = front;
    do {
        printf("%d -> ", queue[i]);
        i = (i + 1) % MAX;
    } while (i != (rear + 1) % MAX);
    printf("NULL\n");
    return 0;
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        int value;
        scanf("%d", &value);
        enqueue(value);
    }
    display();
}