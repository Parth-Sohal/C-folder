#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    int sum=0;
    for (int i = 4; i <= 3*n+1; i += 3)
    {
        printf("%d ",i);
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}