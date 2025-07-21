#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode *next;
};
typedef struct lnode node;

int main() {
    node *head = NULL, *tail = NULL, *previous;
    node *newnode;

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        newnode = (node*)malloc(sizeof(node));
    
        int value;
        scanf("%d", &value);

        newnode->data = value;
    

        if (head == NULL) {
            head = previous = newnode;
        } else {
            previous->next = newnode;
            previous=newnode;
        }
        tail=newnode;
    }

    int position, element;
    printf("Enter position to delete: ");
    scanf("%d", &position);
    node *prev,*nextnode;
    node *temp = head;
    //delete at begining
    if(position == 1){
        temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
    
    //ending
    else if(position == n){
        for(int i = 1; i<n; i++){
            prev=temp;
            nextnode=temp->next;
            temp = temp->next; 
        }
        prev->next=NULL;
        free(nextnode);
    }
         

    //delte at middle
    else{
        temp = head;
        for (int i = 1; i<position; i++){
            prev=temp;
            nextnode=temp->next;
            temp = temp->next;
        }
        prev->next=nextnode->next;
        free(nextnode);
    }
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
    
    
}