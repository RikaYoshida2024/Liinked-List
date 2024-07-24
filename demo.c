#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void appendNode(struct Node** head,int data){
    struct Node* newNode = createNode(data);
    struct Node* last = *head;
    if (*head == NULL){
        *head = newNode;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newNode;
}
void printList(struct Node* node){
    while(node!= NULL){
        printf("%d ,", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main(){
    struct Node* head= NULL;
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);
    appendNode(&head, 4);
    printf("Original List: ");
    printList(head);
    return 0;
}