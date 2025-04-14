#include <stdio.h>
int gcd(int a, int b)
{
    int min = a;
    if (a > b)
    {
        min = b;
    }
    while (1)
    {
        if (a % min == 0 && b % min == 0)
        {
            return min;
        }
        else
        {
            min--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    int happy = gcd(a, b);
    printf("%d", happy);
    return 0;
}

