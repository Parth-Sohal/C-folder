#include <stdio.h>
int main()
{
    int number;
    printf("enter your number = ");
    scanf("%d", &number);
    int sum = 0, lastdigit;
    while (number != 0)
    {
        lastdigit = number % 10;
        if(lastdigit%2==0){
            sum+=lastdigit;
        }
        number = number / 10;
    }
    printf("%d", sum);
    return 0;
}