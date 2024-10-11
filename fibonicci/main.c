#include <stdio.h>

void fibonacciRecursive(int n, int p1, int p2)
{
    if (n < 3)
    {
        return;
    }
    int curr = p1 + p2;
    p2 = p1;
    p1 = curr;
    printf("%i\n", curr);
    return fibonacciRecursive(n - 1, p1, p2);
}

void fibonacciIterative(int n)
{
    if (n < 1)
    {
        printf("%i\n", 0);
    }

    int p1 = 1;
    int p2 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d\n", p2);
        }
        if (i == 2)
        {
            printf("%d\n", p1);
        }
        if (i > 2)
        {
            int curr = p1 + p2;
            p2 = p1;
            p1 = curr;
            printf("%i\n", curr);
        }
    }
}

void printFibonacci(int n)
{
    if (n == 0)
    {
        printf("%i\n", 0);
        return;
    }
    if (n == 1 || n == 2)
    {
        printf("%i\n", 1);
        return;
    }

    printf("%i\n%i\n", 0, 1);
    fibonacciRecursive(n, 1, 0);
}

int main(void)
{
    int n = 20;
    printFibonacci(n);

    // fibonacciIterative(n);
    return 0;
}
