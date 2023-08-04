#include <stdio.h>
#include <string.h>

/*
struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address adds)
{
    printf("Address is %d,%d,%s,%s", adds.houseNo, adds.block, adds.city, adds.state);
}

int main()
{
    struct address adds[5];
    // input

    printf("Enter address for person 1 : ");
    scanf("%d\n", adds[0].houseNo);
    scanf("%d\n", adds[0].block);
    scanf("%s\n", adds[0].city);
    scanf("%s\n", adds[0].state);

    printf("Enter address for person 2 : ");
    scanf("%d\n", adds[1].houseNo);
    scanf("%d\n", adds[1].block);
    scanf("%s\n", adds[1].city);
    scanf("%s\n", adds[1].state);

    printf("Enter address for person 3 : ");
    scanf("%d\n", adds[2].houseNo);
    scanf("%d\n", adds[2].block);
    scanf("%s\n", adds[2].city);
    scanf("%s\n", adds[2].state);

    printf("Enter address for person 4 : ");
    scanf("%d\n", adds[3].houseNo);
    scanf("%d\n", adds[3].block);
    scanf("%s\n", adds[3].city);
    scanf("%s\n", adds[3].state);

    printf("Enter address for person 5 : ");
    scanf("%d\n", adds[4].houseNo);
    scanf("%d\n", adds[4].block);
    scanf("%s\n", adds[4].city);
    scanf("%s\n", adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
}

*/

// Writing code to add two vectors

/*

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};
    calSum(v1, v2, sum);
}

void calSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of X is : %d\n", sum.x);
    printf("Sum of Y is : %d\n", sum.y);
}

*/

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Shradha"};
    acc acc2 = {124, "Aman"};

    printf("Accpunt no = %d\n", acc1.accountNo);
    printf("Name = %s\n", acc1.name);
}
