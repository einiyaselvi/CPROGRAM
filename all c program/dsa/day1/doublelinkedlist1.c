#include <stdio.h>
#include <stdlib.h>

struct doublenode {
    int data;
    struct doublenode *prev;
    struct doublenode *next;
};
typedef struct doublenode node1;

int main() {
    node1 *head = NULL, *temp = NULL, *newnode;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (node1*)malloc(sizeof(node1));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        newnode->data = value;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    // Print forward
    printf("\nForward: ");
    temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        if (temp->next == NULL)
            break;
        temp = temp->next;
    }
    printf("NULL\n");

    // Print backward
    printf("Backward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");

    return 0;
}
