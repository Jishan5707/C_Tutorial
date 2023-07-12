#include <stdio.h>
#include <stdlib.h>

// printf("%d\n", sizeof(int));   // 4
// printf("%d\n", sizeof(float)); // 4
// printf("%d\n", sizeof(char));  // 1

/*
float *ptr;
ptr = (float *)malloc(5 * sizeof(int));

ptr[0] = 1;
ptr[1] = 3;
ptr[2] = 5;
ptr[3] = 7;
ptr[4] = 9;

for (int i = 0; i < 5; i++)
{

printf("%f\n", ptr[i]);
}*/
int main()
{
    float *ptr;
    ptr = (float *)calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {

        printf("%f\n", ptr[i]);
    }

    free(ptr);

    // Memory is freed here and again re allocated to same pointer

    ptr = (float *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {

        printf("%f\n", ptr[i]);
    }

    return 0;
}