#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

isEmpty(struct Stack *ptr) // Function to find if stack is empty
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

isFull(struct Stack *ptr) // Function to find if stack is full
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct Stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct Stack *s; // Representing as a pointer of Stack
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element Manually

    s->arr[0] = 4; // Element is pushed and top is incremented
    s->top++;

    // Check if the stack is empty

    if (isEmpty(s))
    {
        printf("The stack is Empty");
    }
    else
    {
        printf("The stack is not empty");
    }
}