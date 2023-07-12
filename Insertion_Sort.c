#include <stdio.h>

// Function to print the array

printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}

insertSort(int *A, int n)
{
    // This loop is to make the passes for comparison

    for (int i = 1; i <= n - 1; i++)
    {
        int key = A[i];
        int j = i - 1;

        // This loop is to make the comparison and shift the values
        while (j >= 0 && key < A[j])
        {
            A[j + 1] = A[j]; // Terms are shifted at this point
            j--;
        }
        A[j + 1] = key; // After final comparison value is placed
    }
}

int main()
{
    int A[] = {6, 7, 2, 10, 45, 91};
    int n = 6;
    printArray(A, n);
    insertSort(A, n);
    printArray(A, n);
}