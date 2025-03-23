#include <stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;

void enqueue(int);
void dequeue();
void display();

int main() {
    return 0;
}

void enqueue(int val) {
    if ((rear + 1) % size == front) printf("Queue overflow");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % size;
        queue[rear] = val;
        printf("Inserted -> %d", val);
    }
}

void dequeue(){
    if (front = -1) printf("Queue Underflow");
    else {
        printf("Deleted -> %d", queue[rear]);
        if (front == rear) front = rear = -1;
        else front = (front + 1) % size;    
    }
}

void display(){
    if (front == -1) printf("Queue is empty");
    else {
        int i = front;
        
    }
}