#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} node;

node* createNode(int);
void inorder(node*);

int main() {
    node* root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> left = createNode(4);
    root -> left -> right = createNode(5);

    inorder(root);

    return 0;
}

node* createNode(int val) {
    node* newNode = (node*)malloc(sizeof(node));

    newNode -> data = val;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

void inorder(node* root) {
    if (root == NULL) return;

    inorder(root -> left);
    printf("%d ", root -> data);
    inorder(root -> right);
}