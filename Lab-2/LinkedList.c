#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
} *head = NULL;

void InsertAtLast(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        struct Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void DeleteAtLast(){
    if (head == NULL) {
        printf("List is already empty!\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
    } 
    else {
        struct Node* temp = head;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        free(temp->next); 
        temp->next = NULL;
    }
}

void Display(){
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void main(){
    InsertAtLast(10);
    InsertAtLast(20);
    InsertAtLast(30);
    InsertAtLast(40);
    InsertAtLast(50);
    printf("---------\n");
    Display();
    DeleteAtLast();
    printf("---------\n");
    Display();
    printf("---------\n");                                                                                                                                                      
}