#include <stdio.h>

// Linear search
int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

// BInary search
int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching till low and high become equal

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (element > arr[mid])
        {
            low = mid + 1; // Low is changed
        }
        else
        {
            high = mid - 1; // High is changed
        }
    }
    return -1;
}

int main()
{
    // int arr[] = {1, 5, 7, 9, 55, 44, 6, 15, 287, 26};
    // int size = sizeof(arr) / sizeof(int);
    // int element = 15;
    // int searchindex = LinearSearch(arr, size, 15);
    // printf("the element %d was fount at the index %d\n", element, searchindex);

    // Sorted array for binary search
    int arr[] = {1, 3, 5, 8, 10, 15, 25, 49, 78, 89, 125};
    int size = sizeof(arr) / sizeof(int);
    int element = 125;
    int searchindex = BinarySearch(arr, size, element);
    printf("the element %d was fount at the index %d\n", element, searchindex);
}
