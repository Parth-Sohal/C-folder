#include <stdio.h>

int fibbo(int number)
{
    if (number <= 2)
    {
        return 1;
    }
    return fibbo(number - 1) + fibbo(number - 2);
}

int main(int argc, char const *argv[])
{

    int number;
    printf("Enter your number ");
    scanf("%d", &number);
    int fibb = fibbo(number);
    printf("%d", fibb);
    return 0;
}
