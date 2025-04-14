#include <stdio.h>
int main()
{
    int my_var = 5;
    int* ptr = &my_var;
    *ptr = 489;
    printf("%d",my_var);
    return 0;
}