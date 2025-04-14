#include <stdio.h>
int main()
{
    double x1, x2, y1, y2, z1, z2;
    printf("enter the coordinate of first 2 points = ");
    scanf("%f%f", &x1, &x2);
    printf("enter the coordinate of second 2 points = ");
    scanf("%f%f", &y1, &y2);
    printf("enter the coordinate of third 2 points = ");
    scanf("%f%f", &z1, &z2);
    double m1, m2;
    m1 = (y1 - x1) / (y2 - x2);
    m2 = (z1 - y1) / (z2 - y2);
    if (m1 == m2)
    {
        printf("yes the a collinear");
    }
    else
    {
        printf("no");
    }

    return 0;
}