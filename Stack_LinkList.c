#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isEmpty(struct Node **top)
{
    if (top->next = NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node *));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *Push(struct Node *top, int x)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(top))
    {
        printf("Stack overfowed\n");
    }
    else
    {
        n->data = x;
        n->next = top;
        top = n;
    }
    return top;
}

int Pop(struct Node **top)
{
    if (isEmpty(&top))
    {
        printf("Stack is empty");
    }
    else
    {
        struct Node *n = *top;
        top = top->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL) // Run the loop till ptr becomes NULL
    {
        printf("Element : %d\n", ptr->data); // Print the data in the current node
        ptr = ptr->next;                     // Update the pointer to next Node/Packet using ptr->next
    }
}

int main()
{
    struct Node *top;

    Push(top, 10);
    Push(top, 20);
    Push(top, 30);
    Push(top, 40);
    int element = Pop(&top);
    printf("Popped element is %d\n", element);
    LinkedListTraversal(top);
    return 0;
}