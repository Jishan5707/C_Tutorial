#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

// function to generate a node when data is given to it
node *CreateNode(int data)
{
    node *nn;                          // Creating a node pointer
    nn = (node *)malloc(sizeof(node)); // Allocating memory to node
    nn->data = data;                   // setting the data
    nn->left = NULL;                   // setting left and right to null
    nn->right = NULL;
    return nn; // Returning the node pointer nn after all is done
}

// Function for preorder traversal
void PreOrder(node *tree)
{
    if (tree != NULL)
    {
        printf("%d ", tree->data);
        PreOrder(tree->left);
        PreOrder(tree->right);
    }
}

// Function for postorder traversal
void PostOrder(node *tree)
{
    if (tree != NULL)
    {
        PostOrder(tree->left);
        PostOrder(tree->right);
        printf("%d ", tree->data);
    }
}

// InOrder traversal
void InOrder(node *tree)
{
    if (tree != NULL)
    {
        InOrder(tree->left);
        printf("%d ", tree->data);
        InOrder(tree->right);
    }
}

int main()
{

    /*
    // Constructing the root node
    node *p;
    p = (node *)malloc(sizeof(node));
    p->left = NULL;
    p->right = NULL;
    p->data = 2;

    // Constructing the left node
    node *p1;
    p1 = (node *)malloc(sizeof(node));
    p1->left = NULL;
    p1->right = NULL;
    p1->data = 1;
    // Constructing the right node
    node *p2;
    p2 = (node *)malloc(sizeof(node));
    p2->left = NULL;
    p2->right = NULL;
    p2->data = 4;

    // Proper linking of the nodes
    p->left = p1;
    p->right = p2;

    */

    // Creating the nodes using functions
    // node *p = CreateNode(2);
    // node *p1 = CreateNode(1);
    // node *p2 = CreateNode(4);

    // // Linking the nodes
    // p->left = p1;
    // p->right = p2;

    // Preorder traversal of the tree

    // First creating the tree

    node *tree = CreateNode(4);
    node *p1 = CreateNode(1);
    node *p2 = CreateNode(6);
    node *p3 = CreateNode(5);
    node *p4 = CreateNode(2);

    // Now linking the nodes
    tree->left = p1;
    tree->right = p2;
    p1->left = p3;
    p1->right = p4;

    PreOrder(tree);

    printf("\n");

    PostOrder(tree);

    printf("\n");

    InOrder(tree);

    return 0;
}
