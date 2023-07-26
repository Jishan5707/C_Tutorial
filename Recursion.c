#include <stdio.h>

/*void printHW(int count);
void printHW(int count){
    if (count == 0)
    {
        return;
    }
    printf("Hello World \n");
    printHW(count-1);

}

int main(){
    printHW(10);
}
*/

// Finding Sum of first n natural numbers

/*
int sum(int n);
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sum_1 = sum(n - 1);
    int sum_ = sum_1 + n;
    return sum_;
}

int main()
{
    printf("The sum is: %d\n", sum(1254));
    return 0;
}
*/

int fact(int n);
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int fact_1 = fact(n - 1);
    int fact_ = fact_1 * n;
}

int main()
{
    printf("The factorial is %d\n", fact(7));
    return 0;
}