#include <stdio.h>

int sum(int n)
{
    printf("current n -> (%d)\n",n);
    if(n==1) {
        printf("base case reached\n");
        return 1;
    }
    return n + sum (n-1);
}

int main() 
{
    int n;
    printf("enter the number = ");
    scanf("%d", &n);

    printf("%d", sum(n));
    return 0;
}