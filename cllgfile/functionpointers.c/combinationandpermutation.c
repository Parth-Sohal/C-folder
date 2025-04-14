#include <stdio.h>

int factorial(int n)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    return prod;
}

int combinational(int n, int r)
{
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 5; i++)
    {
        for(int space = 0;space<=5-i;space++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" %d ", combinational(i, j));
        }
        printf("\n");
    }

    return 0;
}
