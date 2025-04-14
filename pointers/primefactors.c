#include <stdio.h>
int prime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int number ;
    scanf("%d",&number);
    int var = 2;
    while (number != 1)
    {
        if(prime(var)&&(number%var==0)){
            printf("%d ",var);
            number = number/var;
            // var = 2;
        }
        else
        {
            var = var + 1;
        }
    }
    return 0;
}
