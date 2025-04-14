#include <stdio.h>
int main()
{
//     int n;
//     printf("Enter the number = ");
//     scanf("%d", &n);
    float num =100;
    for (int i = 1;i<=10; i++)
    {
        printf("%.4f ",num);
        num = num*(0.5);
    }
    return 0;
}