#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newnode(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x;
    n->left = n->right = NULL;
    return n;
}

int height(struct Node *root) {
    if (root == NULL) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return (l > r ? l : r) + 1;
}

int bal(struct Node *root) {
    if (root == NULL) return 1;

    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1 &&
        bal(root->left) &&
        bal(root->right))
        return 1;

    return 0;
}

int main() {
    struct Node *root = newnode(10);
    root->left = newnode(5);
    root->right = newnode(20);
    root->left->left = newnode(3);

    printf("Height: %d\n", height(root));

    if (isBalanced(root))
        printf("Tree is Balanced\n");
    else
        printf("Tree is Not Balanced\n");

    return 0;
}
