#include<stdio.h>
#include<math.h>

int prime(int a)
{
    for(int i = 2 ; i<a ; i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}



int main(int argc, char const *argv[])
{
    int n=21;
    for(int i = 1 ; i<=n/2 ;i++){
        int num1 = i;
        int num2 = n-i;
        if(prime(num1) && prime(num2)){
            printf("%d %d",num1,num2);
        }
    }
    return 0;
}
