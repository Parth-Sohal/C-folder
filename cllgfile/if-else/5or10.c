#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter your 3 number = ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b) > c && (a + c) > b && (b + c)> a)
    {
        printf("yes it can be");
    }
    else
    {
        printf("no");
    }

    return 0;
}