#include <stdio.h>

int factorial(int n)
{
    int prod;
    printf("%d is being called\n", n);
    if (n == 1 || n == 0)
    {
        printf("base case is reached\n");
        return 1;
    }
    prod = n * factorial(n - 1);
    printf("%d ka prod ye hai %d\n", n, prod);
    return prod;
}

int main(int argc, char const *argv[])
{
    long n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
