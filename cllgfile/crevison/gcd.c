#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
    if(b%a==0) return a;
    return gcd(b%a,a);
}


int main(int argc, char const *argv[])
{
    printf("%d",gcd(36,60));
    return 0;
}
