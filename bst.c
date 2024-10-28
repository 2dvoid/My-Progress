// Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

// Structure of Node
struct node {
    int data;
    struct node *left, *right;
} *root;

// Function Declaration
struct node *createNode (int n);
void insert (struct node *root, int n);

int main () {

    int n;
    printf ("Set data for root: ");
    scanf ("%d", &n);

    // Create a new node:
    root = createNode(n);
    printf ("Address of root: %p\n", root);
    printf ("Value of root: %d\n", root->data);

    // Insert data:
    printf ("Data to be inserted: ");
    scanf ("%d", &n);
    insert(root, n);
}


// Function for creating new node
struct node *createNode (int n) {
    struct node *tmp = (struct node*) malloc(sizeof(struct node));
    tmp->data = n;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;

}

// Inserting data:
void insert (struct node *root, int n) {
    if(n<root->data) {
        if (root->left==NULL) root->left = createNode(n);
        else insert(root->left, n);
    }

    else if (n>root->data) {
        if (root->right==NULL) root->right = createNode(n);
        else insert(root->right, n);
    }
    else printf ("Fuck You.\n");
}
