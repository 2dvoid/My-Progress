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
void preorder (struct node *root);
void inorder (struct node *root); 
void postorder (struct node *root);
struct node *search (int key, struct node *root); 

int main () {

    // Create a new node:
    int n;
    printf ("----------Creating A New Binary Tree----------\n\n");
    printf ("Set data to root: ");
    scanf ("%d", &n);
    root = createNode(n);
    printf ("\n----------New Tree Created---------\n");
    printf ("Address of root is: %p\n", root);
    printf ("Value of root is: %d\n\n", root->data);


    // Insert data:
    int data;
    printf ("----------Insert Data to the Binary Tree----------\n\n");
    printf ("Number of data to be inserted: ");
    scanf("%d", &n);
    while (n--) {
        printf ("Enter data (No Duplicates): ");
        scanf ("%d", &data);
        insert(root, data);
    }
    printf ("\n----------All the Data were inserted----------\n\n");

    // Preorder Traverse:
    //printf ("----------Traversing the Binary Tree in Preorder----------\n\n");
    //preorder(root);
    //printf ("\n\n----------The Binary Tree was Traversed----------\n\n");
    
    // Inorder Traverse:
    //printf ("----------Traversing the Binary Tree in Inorder----------\n\n");
    //inorder(root);
    //printf ("\n\n----------The Binary Tree was Traversed----------\n\n");
    
    // Postorder Traverse:
    //printf ("----------Traversing the Binary Tree in Postorder----------\n\n");
    //postorder(root);
    //printf ("\n\n----------The Binary Tree was Traversed----------\n\n");

    // Search:
    printf ("Enter a key to search: ");
    scanf ("%d", &n);

    struct node *searchrslt = search (n, root);
    if (searchrslt!=NULL) {
        printf ("----------Data found----------\n\n");
        printf ("Address: %p\n", searchrslt);
        printf ("Key: %d\n", searchrslt->data);
    }
    else printf ("----------Data nof found!----------\n\n");

}


// Create new node
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
    else printf ("No Duplicates Allowed!!\n");
}



// Traverse Preorder:
void preorder (struct node *root) {
    if (root==NULL) return;
    printf ("%d ", root->data);
    preorder (root->left);
    preorder (root->right);
    
}

// Traverse Inorder:
void inorder (struct node *root) {
    if (root==NULL) return;
    inorder (root->left);
    printf ("%d ", root->data);
    inorder (root->right);
    
}

// Traverse Postorder:
void postorder (struct node *root) {
    if (root==NULL) return;
    postorder (root->left);
    postorder (root->right);
    printf ("%d ", root->data);
    
}


// Search:
// (Returns the address of the node holding the key)

struct node *search (int key, struct node *root) {
    if (root==NULL) return NULL;
    if (key==root->data){
        return root; 
    }
    else if (key<root->data){
        return search (key, root->left);
    } 
    else {
        return search (key, root->right);
    }
}
