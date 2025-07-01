#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int queue[SIZE];

int front = -1;
int rear = -1;

void enqueue(int element) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow!\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = element;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d \n", queue[front]);
    front++;
    
    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}