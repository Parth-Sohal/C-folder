#include<stdio.h>
#include<limits.h>

int main(){
    // printf("%d",INT_MAX);
    int n;
    scanf("%d",&n);
    int k = 0;
    int power = 1;
    int result = 0;
    while((1<<k) <= n){
        if((n&(1<<k)) == power ){
            result = k;
            break;
        }
        k++;
        power*=2;
    }
}