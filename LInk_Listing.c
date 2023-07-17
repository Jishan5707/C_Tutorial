#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

// Function to print the data in the linked list
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL) // Run the loop till ptr becomes NULL
    {
        printf("Element : %d\n", ptr->data); // Print the data in the current node
        ptr = ptr->next;                     // Update the pointer to next Node/Packet using ptr->next
    }
}

struct Node *InsertAtHead(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
}

// Function to enter the node at the given index
struct Node *InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct Node *InsertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}

struct Node *InsertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = NULL; // 7-11-66 are linked to each other

    // LinkedListTraversal(head);

    // Insertion programs

    // head = InsertAtHead(head, 56);

    // New element is added at the begining 56-7-11-66

    // LinkedListTraversal(head);

    // InsertAtIndex(head, 56, 2);

    // LinkedListTraversal(head);

    // InsertAtEnd(head, 56);

    // LinkedListTraversal(head);

    InsertAfterNode(head, second, 56); // second is the node that we have created
    // We want to add the new data after the the second node 7-11-56-66
    // 56 is Added after the second node data 11

    LinkedListTraversal(head);
}
