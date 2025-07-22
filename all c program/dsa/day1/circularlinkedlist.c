

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};
typedef struct Node node;
int main() {
    node *head = NULL;
    node* newNode, *temp, *previousnode,*tail;

    for(int i = 1; i <= 5; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        int value;
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = head ;
       

        if (head == NULL) {
            previousnode=newNode;
            head=newNode;
        } else {
              previousnode->next=newNode;
              previousnode=newNode;
        }
        tail = newNode;
    }

  
    printf("Linked List Values:\n");
    temp = head;
    do{
        printf("%d -> ", temp->data);
        temp = temp->next;
    }while(temp != head);
    return 0;
}
