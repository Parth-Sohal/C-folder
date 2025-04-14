#include <stdio.h>

void fun(int* ptr)
{
    *ptr = 7;
    return ;
}
//pointer ke stah

int main(int argc, char const *argv[])
{
    int a = 6;
    printf("%d",a);
    int* ptra = &a;
    fun(ptra);
    printf("\n%d",a);
    return 0;
}
