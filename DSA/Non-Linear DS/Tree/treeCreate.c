#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    node* left;
    node* right;
} node;

node* createNode(int val) {
    node* newNode = (node*)malloc(sizeof(node));

    newNode -> data = val;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

int main() {
    node* root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Root Node: %d\n", root->data);
    printf("Left Child of Root: %d\n", root->left->data);
    printf("Right Child of Root: %d\n", root->right->data);
    
    return 0;
}