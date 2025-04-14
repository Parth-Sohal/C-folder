#include <stdio.h>
void leap_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("leapyear");
            }
            else
            {
                printf("not a leap year");
            }
        }
        else
        {
            printf("leap year");
        }
    }
    else
    {
        printf("no leap year");
    }
}
int main()
{
    int num;
    printf("Enter the year = ");
    scanf("%d", &num);
    leap_year(num);
    return 0;
}