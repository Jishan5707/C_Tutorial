#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Queue
{
    int size;
    int f;
    int b;
    int *arr;
} Queue;

int isEmpty(Queue *q)
{
    if (q->f == q->b)
    {
        printf("Queue is empty\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Queue *q)
{
    if (q->b == q->size - 1)
    {
        printf("Queue is full\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Data cannot be entered\n");
    }
    else
    {
        q->b++;
        q->arr[q->b] = value;
    }
}

int Dequeqe(Queue *q)
{
    if (isEmpty(q))
    {
        printf("No element to Dequeue\n");
    }
    else
    {
        q->f++;
        int a = q->arr[q->f];
        return a;
    }
}

int main()
{
    Queue q;
    q.size = 100;
    q.f = -1;
    q.b = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 15);

    // printf("%d", isEmpty(&q));

    printf("The element dequeued is %d\n", Dequeqe(&q));
    printf("The element dequeued is %d\n", Dequeqe(&q));
    printf("The element dequeued is %d\n", Dequeqe(&q));
}