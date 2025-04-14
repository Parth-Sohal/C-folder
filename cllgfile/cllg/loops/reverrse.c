#include <stdio.h>
int main()
{
    int num, mod,reverse=0;
    printf("Enter your number = ");
    scanf("%d", &num);
    while(num!=0){
        mod = num%10;
        reverse = reverse*10+mod;
        num/=10;
    }
    printf("%d",reverse);
    return 0;
}