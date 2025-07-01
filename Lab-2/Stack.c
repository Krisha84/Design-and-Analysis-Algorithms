#include <stdio.h>

#define SIZE 100
int stack[SIZE];

int top = -1;

void push(int element) {
    if (top >= SIZE - 1) {
        printf("Stack Overflow !!\n");
        return;
    }

    top++;
    stack[top] = element;
}

void pop(){
    if(top == -1){
        printf("Stack Empty !!\n");
        return;
    }

    printf("%d \n",stack[top]);
    top--;
}

void peek(int index){
    if(top-index+1 <= -1){
        printf("Stack Underflow !!");
        return;
    }

    printf("%d \n", stack[top-index+1]);
}

void change(int index, int newElement){
    if(top-index+1 <= -1){
        printf("Stack Underflow !!");
        return;
    }

    stack[top-index+1] = newElement;
}

void display() {
    if (top == -1) {
        printf("Stack Empty !!\n");
        return;
    }

    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void main() {
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    push(18);
    push(19);
    push(20);
    display();
    printf("----------\n");
    pop();
    pop();
    printf("----------\n");
    display();
    printf("----------\n");
    peek(4);
    printf("----------\n");
    display();
    printf("----------\n");
    change(3,88);
     printf("----------\n");
    display();
    printf("----------\n");
}