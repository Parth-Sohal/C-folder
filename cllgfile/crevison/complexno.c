#include<stdio.h>
#include<string.h>
#include<ctype.h>
int sum(int n){
    if(n==0)return 0;
    return n + sum(n-1);
}
int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
