#include <stdio.h>
int main()
{
    double x, y;
    printf("enter the coordinates = ");
    scanf("%lf%lf", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("point lies in origin");
    }
    else if (y == 0)
    {

        printf("point lies in x- axis");
    }
    else if (x == 0)
    {
        printf("point lies in y-axiz");
    }
    else{
        printf("wow");
    }
    return 0;
}