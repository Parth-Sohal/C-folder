#include <stdio.h>

int stairpath(int number)
{
    if(number==2) return 2;
    if(number==1) return 1;

    return stairpath(number-1) + stairpath(number-2); 
}

int main(int argc, char const *argv[])
{

    int number;
    printf("Enter your number ");
    scanf("%d", &number);
    int fibb = stairpath(number);
    printf("%d", fibb);
    return 0; 
}
