\\without getting the values from users and without using for loop

#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct Node {
    int data;
    struct Node* next;
};

typedef struct Node node;

int main() {
    node *head = NULL, *node1, *node2;

    // Create first node
    node1 = (node*)malloc(sizeof(node));
    node1->data = 30;
    node1->next = NULL;
    head = node1; // head points to first node

    // Create second node
    node2 = (node*)malloc(sizeof(node));
    node2->data = 10;
    node2->next = NULL;
    node1->next = node2; // link node1 to node2

    // Display the linked list
    printf("Linked List Values:\n");
    node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
