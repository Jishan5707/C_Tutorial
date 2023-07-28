#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int row;
    int column;
    int ele;
};

struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *ptr;
};

// Code to Get input input the matrix
void Create(struct Sparse *s)
{
    printf("Enetr the dimensions of the matrix");
    printf("\n");
    scanf(" %d\t , %d\t ", &s->n, &s->m);
    scanf("%d", &s->num);
    printf("Enter the no of Non Zero elements\n");

    s->ptr = (struct Element *)malloc(s->num * sizeof(struct Element));
    printf("Enter the elements\n");

    for (int i = 0; i < s->num; i++)
    {
        scanf("%d\t, %d\t, %d\t", &s->ptr[i].row, &s->ptr[i].column, &s->ptr[i].ele);
    }
}

// Code to display the matrix in actual format

void Display(struct Sparse *s)
{
    int i, j, k = 0;

    for (i = 0; i < s->m; i++)
    {
        for (j = 0; j < s->n; j++)
        {
            if (i == s->ptr[k].row && j == s->ptr[k].column)
            {
                printf("%d", s->ptr[k++].ele);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct Sparse s;
    Create(&s);
    Display(&s);
    return 0;
}