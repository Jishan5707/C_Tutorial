// linked list implementation in c
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;
void addateEnd(Node *ref, int data)
{
    Node *node1;
    Node *node2;
    node1 = (Node *)malloc(sizeof(Node));
    node2 = (Node *)malloc(sizeof(Node));
    node2 = ref;
    node1->data = data;
    node1->next = NULL;
    if (ref == NULL)
    {
        (ref) = node1;
        return;
    }

    while (node2->next != NULL)
    {
        node2 = node2->next;
    }

    node2->next = node1;
    return;
}
void AddatBeg(Node *ref, int data)
{
    Node *node2 = malloc(sizeof(Node));
    node2->data = data;
    node2->next = (ref);

    (ref) = node2;
}
void AddAfter(Node *ref, int data, int position)
{
    int i = 0;
    Node *node1 = ref;
    Node *node2 = malloc(sizeof(Node));
    for (i = 0; i < position - 1; i++)
    {
        node1 = node1->next;
    }
    node2->data = data;
    node2->next = node1->next;
    node1->next = node2;
}
void deletenode(Node *ref, int data)
{
    Node *node1 = ref, *prev;
    if (node1 == NULL)
    {
        printf(" cannont delete the node as it is already empty");
        return;
    }
    if (node1 != NULL && node1->data == data)
    {
        node1 = node1->next;
        free(node1);
        return;
    }
    while (node1 != NULL && node1->data != data)
    {
        prev = node1;
        node1 = node1->next;
    }
    prev->next = node1->next;
    free(node1);
    return;
}

void printlist(Node *ref)
{

    while (ref != NULL)
    {
        printf(" \t %d ->", ref->data);
        ref = ref->next;
    }
}

int main()
{
    Node *head = NULL;

    addateEnd(&head, 1);
    AddatBeg(&head, 2);
    AddatBeg(&head, 3);
    addateEnd(&head, 4);
    AddAfter(&head, 5, 5);

    printf("Linked list: ");
    printlist(head);

    printf("\nAfter deleting an element: ");
    deletenode(&head, 3);
    printlist(head);
}