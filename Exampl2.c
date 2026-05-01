#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} ;

struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue (add to rear)
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) { // Queue is empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d enqueued.\n", value);
}

// Dequeue (remove from front)
int dequeue() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return -1;
    }
    struct Node* temp = front;
    int removed = temp->data;
    front = front->next;

    if (front == NULL) {
        rear = NULL; // Reset rear if queue becomes empty
    }
    free(temp);
    printf("%d dequeued.\n", removed);
    return removed;
}

// Peek the front element
int peek() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return -1;
    }
    return front->data;
}

int main() {
    enqueue(10); // 10 enqueued
    enqueue(20); // 20 enqueued
    dequeue();   // 10 dequeued
    printf("Front element: %d\n", peek()); // 20
    return 0;
}
