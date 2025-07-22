//Double linkedlist without getting from users

#include <stdio.h>
#include <stdlib.h>

struct doublenode {
    int data;
    struct doublenode *prev;
    struct doublenode *next;
};
typedef struct doublenode node1;

int main() {
    node1 *head = NULL;
    node1 *temp, *newnode, *newnode1;


    newnode = (node1*)malloc(sizeof(node1));
    newnode->data = 10;
    newnode->prev = NULL;
    newnode->next = NULL;
    head = newnode;

    newnode1 = (node1*)malloc(sizeof(node1));
    newnode1->data = 40;
    newnode1->prev = newnode;
    newnode1->next = NULL;
    newnode->next = newnode1;

    
    printf("Forward: ");
    temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        if (temp->next == NULL)
            break;
        temp = temp->next;
    }
    printf("NULL\n");

    printf("Backward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");

    return 0;
}
