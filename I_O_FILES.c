#include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("File doesnot exist\n");
//     }
//     else
//     {
//         fclose(fptr);
//     }
// }

int main()
{
    FILE *fptr;
    // fptr = fopen("Test.txt", "r");

    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // fptr = fopen("Test.txt", "r");

    // fprintf(fptr, "%c", 'M'); // Single quote is used for character
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'N');
    // fprintf(fptr, "%c", 'G');
    // fprintf(fptr, "%c", 'O');

    // fgetc(fptr) is used to read characters from the file

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    // fptr = fopen("Test.txt", "w");

    // fputc('A',fptr) is used to print characters from the file into the terminal

    // fputc('M', fptr);
    // fputc('A', fptr);
    // fputc('N', fptr);
    // fputc('G', fptr);
    // fputc('O', fptr);//Apple is changed to MANGO

    // Code to print entire string using loops and EOF condition feature

    // char ch;
    // ch = fgetc(fptr);
    // while (ch != EOF)
    // {
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");

    /*
int n;
fscanf(fptr, "%d", &n);
printf("number = %d\n", n);

fscanf(fptr, "%d\n", &n);
printf("number = %d\n", n);

fscanf(fptr, "%d\n", &n);
printf("number = %d\n", n);

fscanf(fptr, "%d\n", &n);
printf("number = %d\n", n);

fscanf(fptr, "%d\n", &n);
printf("number = %d\n", n);
*/

    // char name[100];
    // int age;
    // float cgpa;

    // printf("Enter name : ");
    // scanf("%s", &name);

    // printf("Enter age : ");
    // scanf("%d", &age);

    // printf("Enter cgpa : ");
    // scanf("%f", &cgpa);

    // // code to enter the data into the file

    // fprintf(fptr, "%s\t", name);
    // fprintf(fptr, "%d\t", age);
    // fprintf(fptr, "%f\t", cgpa);

    fptr = fopen("Odd.txt", "w");

    // code to enter odd numbers into the file

    int n;

    printf("Enter the number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
}