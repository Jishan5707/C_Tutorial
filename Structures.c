#include <stdio.h>
#include <string.h>

// Learning the topic Structures

// Defining Structures

/*
struct student
{
    int roll;
    float cgpa;
    char name[200];
};

int main()
{
    struct student s1;

    s1.roll = 112103102;
    s1.cgpa = 9.21;
    strcpy(s1.name, "Shradha");

    printf("Student name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

    struct student s2;

    s2.roll = 112103103;
    s2.cgpa = 8.98;
    strcpy(s2.name, "Anish");

    printf("Student name = %s\n", s2.name);
    printf("Student roll = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct student s3;

    s3.roll = 112103104;
    s3.cgpa = 8.76;
    strcpy(s3.name, "Aman");

    printf("Student name = %s\n", s3.name);
    printf("Student roll = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);

    return 0;
}

*/

typedef struct student
{
    char name[100];
    int roll;
    float cgpa;
} stu; //<<-- This is the nickname that we havre given to the student

void printinfo(struct student s1)
{
    printf("Student information\n");
    printf("Name = %s\n", s1.name);
    printf("Roll = %d\n", s1.roll);
    printf("CGPA = %f\n", s1.cgpa);
}
int main()
{
    // This is defining of structure array in the student

    // struct student ECE[100];
    // ECE[0].roll = 1664;
    // ECE[0].cgpa = 8.98;
    // strcpy(ECE[0].name, "Shradha");

    // printf("Name = %s\n", ECE[0].name);
    // printf("Roll = %d\n", ECE[0].roll);
    // printf("cgpa = %f\n", ECE[0].cgpa);

    // This is initialization of values to data types in on line

    // struct student s1 = {"Shradha", 1664, 8.98};
    struct student s2 = {"Aman", 1665, 8.76};
    struct student s3 = {0}; // This assigns 0 value to all data types

    // Assigning values using nickname "stu"

    stu s1 = {"shradha", 1664, 9.8};

    // printf("Student roll = %d\n", s1.roll);

    // Pointers to Structures

    struct student *ptr;

    ptr = &s1;

    // Printing numbers using Pointers

    /*
    printf("Roll = %d\n", (*ptr).roll);

    printf("Name = %s\n", (*ptr).name);

    printf("CGPA = %f\n", (*ptr).cgpa);*/

    // Here we are using Arrow operator to print the numbers using pointers

    /*
    printf("Roll = %d\n", ptr->roll);

    printf("Name = %s\n", ptr->name);
    */

    // calling the function
    // We have passed a structure in the function anfd the called
    // printinfo(s1);
    printf("Name = %s\n", s1.name);
}
