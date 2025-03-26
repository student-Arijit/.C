#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

typedef struct {
    node* top;
} stack;

void ini(stack* s) {
    s->top = NULL;
}

int isEmpty(stack* s){
    return s->top == NULL;
}

void push(stack* s, int val) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode -> data = val;
    newNode -> next = s->top;
    s->top = newNode;
}

int pop(stack* s) {
    if (isEmpty(s)) {
        printf ("underflow");
        return -1;
   }

   node* temp = s->top;
   int popped = temp->data;
   s->top = temp->next;
   free(temp);
   return popped;
}

void display(stack* s) {
    if(isEmpty(s)) {
        printf("empty");
        return;
    }
    node* temp = s->top;
    while(temp) {
        printf("%d\n", temp ->data);
        temp = temp->next;
    }
}

int main() {
    stack s;
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