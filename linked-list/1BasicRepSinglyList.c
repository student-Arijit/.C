#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    struct node *ptr;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one -> data = 1;
    two -> data = 2;
    three -> data = 3;

    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    ptr = one;

    while (ptr != NULL) {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    
    return 0;
}