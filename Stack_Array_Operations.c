#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

isempty(struct Stack *ptr) // Function to find if stack is empty
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

isfull(struct Stack *ptr) // Function to find if stack is full
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

void Push(struct Stack *sp, int value)
{
    if (isfull(sp))
    {
        printf("Stack is full");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = value;
    }
}

int Pop(struct Stack *sp)
{
    if (isempty(sp))
    {
        printf("Stack is empty cannot be poped");
    }
    else
    {
        int val = sp->arr[sp->top];
        sp->top = sp->top - 1;
        return val;
    }
}

// Writing code for peek operation

int Peek(struct Stack *sp, int i)
{
    if (sp->top - i + 1 < 0)
    {
        printf("Not a valid position\n");
        return -1;
    }
    else
    {
        return sp->arr[sp->top - i + 1];
    }
}

// Stack top  and bottom

int StackTop(struct Stack *sp)
{
    return sp->arr[sp->top];
}

int StackBottom(struct Stack *sp)
{
    return sp->arr[0];
}

int main()
{
    struct Stack *sp; // Representing as a pointer of Stack
    sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("%d\n", isempty(sp));
    printf("%d\n", isfull(sp));

    Push(sp, 10); // This pushes the value in the array
    Push(sp, 20);
    Push(sp, 30);
    Push(sp, 40);
    Push(sp, 50);
    Push(sp, 60);
    Push(sp, 70);
    Push(sp, 80);
    Push(sp, 90);
    Push(sp, 100);
    printf("%d\n", isempty(sp));
    printf("%d\n", isfull(sp)); // This shows that value is stored in the array

    // printf("Poped %d fron the Stack\n", Pop(sp));
    // // Jo last gaya vo pahale bahar ayegaa
    // printf("Poped %d fron the Stack\n", Pop(sp));
    // printf("Poped %d fron the Stack\n", Pop(sp));
    // printf("Poped %d fron the Stack\n", Pop(sp));
    // printf("Poped %d fron the Stack\n", Pop(sp));

    // printf("The value at position %d is %d\n", 1, Peek(sp, 1));
    //  We are accessing the first position value in the stack

    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, Peek(sp, j));
    }

    printf("Stack top is %d\n", StackTop(sp));
    printf("Stack Bottom is %d\n", StackBottom(sp));
}