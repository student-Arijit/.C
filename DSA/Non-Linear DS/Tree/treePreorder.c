#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

node* createNode(int val);
void preOrder(node* root);

int main() {
    node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    preOrder(root);

    return 0;
}

node* createNode(int val) {
    node* newNode = (node*)malloc(sizeof(node));

    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preOrder(node* root) {
    if (root == NULL) return;

    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}