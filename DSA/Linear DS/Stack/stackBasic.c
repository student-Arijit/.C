#include <stdio.h>
#include <stdlib.h>
#define size 5

typedef struct {
    int arr[size];
    int top;
} Stack;

void ini(Stack*);
int isFull(Stack*);
int isEmpty(Stack*);
void push(Stack*, int);
int pop(Stack*);
void display(Stack*);

int main() {
    Stack s;
    ini(&s);
    
    push(&s, 10);
    push(&s, 11);
    push(&s, 12);
    push(&s, 10);
    push(&s, 18);
    push(&s, 19);

    display(&s);

    printf("popped %d\n", pop(&s));
    printf("popped %d\n", pop(&s));

    display(&s);

    return 0;
}

void ini(Stack *s) {
    s -> top = -1;
}

int isFull(Stack* s) {
    return s->top == size - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int val) {
    if (isFull(s)) {
        printf("overflow\n");
        return;
    }
    s -> arr[++(s->top)] = val;
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("underflow\n");
    }
    return s->arr[s->top--];
}

void display(Stack* s) {
    if (isEmpty(s)) {
        printf("stack is empty\n");
        return;
    }
    for (int i = s->top; i>=0; i--)
        printf("%d\n", s->arr[i]);
}