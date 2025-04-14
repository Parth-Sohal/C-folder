#include <stdio.h>

int power(int a,int b){
    if(b==0){
        return 1;
    }
    return a * power(a,b-1);
}

int main() 
{
    int a,b;
    printf("enter the number = ");
    scanf("%d", &a);
    printf("enter the number = ");
    scanf("%d", &b);

    int pow = power(a,b);
    printf("%d",pow);
    return 0;
}