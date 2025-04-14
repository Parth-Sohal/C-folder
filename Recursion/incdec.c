#include<stdio.h>

void incdec(int n)
{
    if(n==0){
        return ;
    }
    printf("current - %d\n",n);
    incdec(n-1);
    printf("current %d\n",n);
    return ;
}


int main(){
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    incdec(n);
    return 0;
}