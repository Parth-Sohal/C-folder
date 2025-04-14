#include <stdio.h>
int power(int a, int b){
    if (b == 1)
    {
        return a;
    }

    if (b == 0)
    {
        return 1;
    }
    int result;
    int temp = power(a,b/2);
    if (b % 2 == 0)
    {
        result = temp * temp;
    }

    else
    {
        result = a * temp * temp;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    int pow;

    printf("Enter the power = ");
    scanf("%d", &pow);

    printf("power = %d", power(number, pow));

    return 0;
}
