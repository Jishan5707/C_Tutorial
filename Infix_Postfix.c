#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// We are writing the code for converting the infix expression to Postfix expression

struct Stack
{
    int size;
    int top;
    char *arr;
};

int isempty(struct Stack *ptr) // Function to find if stack is empty
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

int isfull(struct Stack *ptr) // Function to find if stack is full
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

int StackTop(struct Stack *sp)
{
    return sp->arr[sp->top];
}

int Precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
        return 0;
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char *reverse(char *arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        char first = arr[i];
        char second = arr[n - i - 1];
        arr[i] = second;
        arr[n - i - 1] = first;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s \t", arr[i]);
    }
}

char *InfixToPostfix(char *infix)
{
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));

    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sizeof(char) * sp->size);

    char *postfix = (char *)malloc((strlen(infix) + 1) * sp->size);
    int i = 0; // Track infix Traversal
    int j = 0; // Track postfix Addition

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (Precedence(infix[i]) > Precedence(StackTop(sp)))
            {
                Push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = Pop(sp);
                j++;
            }
        }
    }
    while (!isempty(sp))
    {
        postfix[j] = Pop(sp);
        j++;
    }
    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char *infix = "a-b+t/6";
    printf("Postfix is %s\n", InfixToPostfix(infix));

    // Converting infix to prefix by reversing initially infix and the doing its postfix
    // After postfix again reverse the output to get the prefix expression
    int n = strlen(infix);
    char *infix2 = reverse(infix, n);

    return 0;
}