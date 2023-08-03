#include <stdio.h>
#include <string.h>
// void printString(char arr[]);

// int main()
// {
/*
char firstName[] = "Jishan";
char lastName[] = "Pathan";
char name[6];
printString(firstName);
printString(lastName);
printf("%s", firstName);
printf("\n");
scanf("%s", name);
printf("%s", name);
return 0;
*/

// This type of string array can be changed which is declared using
// pointer
// char *canChange = "Hello world";
// puts(canChange);
// canChange = "Hello";
// puts(canChange);

// char cantchange[] = "hello World";
// puts(cantchange);
// // cantchange = "Again Hello World";
// puts(cantchange);
// }
/*
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

int main()
{
    // printf("Enter Your First name\n");

    // fgets(name, 100, stdin);
    // printf("Length is : %d\n", countLength(name));

    // Using strlen() function to find the length of array

    // int length = strlen(name);
    // printf("Length is : %d\n", length);

    // using the function strcpy() to copy two arrays

    char old[] = "Jishan";
    char new[] = "Pathan";

    // strcpy(new, old);
    // puts(new);
    // puts(old);

    // using string concatenation function strcat()

    // strcat(new, old);
    // puts(new);

    // using string function string comparison strcmp()

    // printf("%d\n", strcmp(new, old));

    // Taking input from user using the format specifier %c by using loops

    char str[100];
    char ch;
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
}