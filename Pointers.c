#include <stdio.h>

/*void square(int n);
void _square(int *n);

    // int age = 22;
    // int *ptr = &age;
    // int _age = *ptr;
    // printf("%d",_age);
    // printf("%p\n",&age);
    // printf("%p\n",ptr);
    // printf("%p\n ",&ptr);
    // printf("%d\n",age);
    // printf("%d\n",*ptr);
    // printf("%d\n",*(&age));

    // int x;
    // int *potr;

    // potr = &x;
    // *potr = 0;

    // printf(" x = %d\n",x);//0
    // printf("*ptor = %d\n",*potr);//0

    // *potr += 5;

    // printf(" x = %d\n",x);//5
    // printf("*ptor = %d\n",*potr);//5

    // (*potr)++;

    // printf(" x = %d\n",x);//6
    // printf("*ptor = %d\n",*potr);//6

    // float price = 100.00;
    // float *ptr = &price;
    // float**pptr = &ptr;

    // printf("%p\n",ptr);
    // printf("%p\n",&price);
    // printf("%p\n",pptr);


//To print the value using the pointer to pointer we use (**)and then the variable name
    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;

    // printf("%d\n",**pptr);

    int* k;
    int number = 4;


    square(number);
    printf(" NUmber = %d\n",number);

    _square(&number);
    printf(" number = %d\n",number);



}

void square(int n)
{
    n = n * n;
    printf(" Square = %d\n",n);
}

void _square(int *n)
{
    *n = (*n) * (*n);
    printf("square = %d\n",*n);
}*/

/*void swap(int a,int b);
void printaddress();


int main()
{

    int n = 4;

    printf("%p\n",&n);
    printaddress(&n);

//     int  x = 3, y = 5;
//     swap(x,y);
//
}

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf(" a = %d , b = %d",a,b);

}
void printaddress(int *n){
    printf("%p\n",n);
}
*/

int main()
{
    int a = 3;
    int b = 5;
    printf("%d", a);
}

void dowork(int a, int b)
{
    int sum = a + b;
    int prod = a * b;
    int avg = (a + b) / 2;
}