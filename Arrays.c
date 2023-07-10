#include <stdio.h>
// int main()

// float price[3];
// printf("Enter the three prices:\n");
// scanf("%f", &price[0]);
// scanf("%f", &price[1]);
// scanf("%f", &price[2]);

// printf("First value is %f\n", price[0] + (0.18 * price[0]));
// printf("Second value is %f\n", price[1] + (0.18 * price[1]));
// printf("Third value is %f\n", price[2] + (0.18 * price[2]));

// int age = 22;
// int *ptr = &age;
// printf("ptr =  %u\n", ptr);
// printf("%d\n", *ptr);
// ptr++;
// printf("ptr = %u\n", ptr);
// printf("%d\n", *ptr);

// POinter Operations

// int age1 = 22;
// int age2 = 23;
// int *ptr1 = &age1;
// int *ptr2 = &age2;
// printf("ptr1 = %u\nptr2 = %u\n Difference = %u\n", ptr1, ptr2, ptr1 - ptr2);

// ptr1 = &age2;
// printf("Are they equal %u\n", ptr1 == ptr2);

// Taking input from user and printing the array using pointer

// int aadhar[5];
// int *ptr = aadhar;

// input
// for (int i = 0; i < 5; i++)
// {
//     printf("%d index : ", i);
//     scanf("%d", (ptr + i));
// }

// // output
// for (int i = 0; i < 5; i++)
// {
//     printf("%d index = %d\n", i, *(ptr + i));
// }

// Using array in functions

// void prtNum(int arr[], int n);
// void prtNum(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \t", arr[i]);
//     }
// }
// int main()
// {
//     int arr = {1, 2, 3, 4, 5, 6};

//     prtNum(arr, 6);
//     return 0;
// }

// Function to reverse an array
/*
int reverse(int arr[], int n);
int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int first = arr[i];
        int second = arr[n - i - 1];
        arr[i] = second;
        arr[n - i - 1] = first;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
}
*/

// Program to store first n fibonacci numbers

/*
int main()
{
    int n;
    printf("Enter the number No.>2\n");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("%d \t %d \t", fib[0], fib[1]);

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
        printf("%d \t", fib[i]);
    }

    return 0;
}
*/

// Creating 2D array to store table of 2 and 3

void storeTable(int arr[][10], int n, int m, int num)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = num * (i + 1);
    }
}
int main()
{
    int table[2][10];
    storeTable(table, 0, 10, 2);
    storeTable(table, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[1][i]);
    }
    return 0;
}
