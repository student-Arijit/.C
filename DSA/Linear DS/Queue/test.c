#define size 5

int queue[size];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == size - 1) printf("overflow");
    else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = val;
    }
}

void dequeue() {
    if (front == -1 || front > rear) printf("underflow");
    else {
        front++;
        if (front > rear) front = rear = -1;
    }
}

void display() {
    if (front == -1) printf("empty");
    else {
        for (int i = front; i < rear; i++) {
          
        }
    }
}