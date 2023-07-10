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

// Function to check if the tree is a Binary search tree or not
int isBST(node *root)
{
    static node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }

        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }

        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

// Function to do searching in a BST
int SearchBST(node *root, int key)
{
    int key2 = key;
    if (key == root->data)
    {
        return 1;
    }
    if (key < root->data)
    {
        SearchBST(root->left, key);
        return 1;
    }
    if (key > root->data)
    {
        SearchBST(root->right, key);
        return 1;
    }
    return 0;
}

node *SearchBST2(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return SearchBST2(root->left, key);
    }
    else
    {
        return SearchBST2(root->right, key);
    }
}

int main()
{
    node *root = CreateNode(5);
    node *p1 = CreateNode(3);
    node *p2 = CreateNode(6);
    node *p3 = CreateNode(1);
    node *p4 = CreateNode(4);

    // Now linking the nodes
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    InOrder(root); // Inorder traversal of BST gives sorted array in ascending order

    printf("\n");

    printf("%d\n", isBST(root));

    printf("%d\n", SearchBST(root, 4));

    int key = 4;

    node *found = SearchBST2(root, key);

    if (found != NULL)
    {
        printf("Element found is : %d\n", found->data);
    }
    else
    {
        printf("Element is not found");
    }

    return 0;
}