#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 10

typedef struct Queue {
    int items[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queue;

Queue* createQueue() {
    Queue* q = malloc(sizeof(Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

int isFull(Queue* q) {
    if (q->rear == MAX_QUEUE_SIZE - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty(Queue* q) {
    if (q->front == -1 && q->rear == -1) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    } else if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
        q->items[q->rear] = value;
    } else {
        q->rear++;
        q->items[q->rear] = value;
    }
}

int dequeue(Queue* q) {
    int item;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    } else if (q->front == q->rear) {
        item = q->items[q->front];
        q->front = -1;
        q->rear = -1;
    } else {
        item = q->items[q->front];
        q->front++;
    }
    return item;
}

int main() {
    Queue* q = createQueue();
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    printf("%d\n", dequeue(q)); // output: 1
    printf("%d\n", dequeue(q)); // output: 2
    printf("%d\n", dequeue(q)); // output: 3
    printf("%d\n", dequeue(q)); // output: Queue is empty
    return 0;
}
