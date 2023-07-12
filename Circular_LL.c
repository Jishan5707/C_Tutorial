#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkListTraversal(struct Node *head) // Here the function is of void type
{
    struct Node *ptr = head; // First element is printed manually
    printf("Element : %d\n", ptr->data);
    ptr = ptr->next;

    while (ptr != head) // Loop is used to print rest of the elements
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void LinkListTraversal2(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // At this point p points to last node of thiscircular linked list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()

{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    LinkListTraversal(head);
    // List printed using do while loop
    // LinkListTraversal2(head);
    printf("List After the new node is inserted at the first position\n");

    head = InsertAtFirst(head, 54);

    LinkListTraversal2(head);
}
