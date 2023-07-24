#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int isFull(Node *n)
{
    n = (Node *)malloc(sizeof(Node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(Node *f, Node *r, int value)
{
    Node *n = (Node *)malloc(sizeof(Node));
    if (isFull(n))
    {
        printf("Queue is full no element can be added\n");
    }
    else
    {
        n->data = value;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

// Code for linkList traversal
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
Node *f = NULL;
Node *r = NULL;

int main()
{
    enqueue(f, r, 10);
    enqueue(f, r, 20);
    enqueue(f, r, 30);

    linkedListTraversal(f);
    return 0;
}