#include <stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;

void enqueue(int);
void dequeue();
void display();

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    display();

    return 0;
}

void enqueue(int val) {
    if (rear == size - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) 
            front = 0;
        rear++;
        queue[rear] = val;
        printf("Inserted value -> %d\n", val);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    }   else {
        printf("Deleted value -> %d\n", queue[front]);
        front++;

        if(front > rear) {
            front = rear = -1;
        }
    }
}   

void display() {
    if (front == -1)
        printf("Queue is empty");
    else {
        printf("Queue elements: ");
        for (int i = front; i < rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}