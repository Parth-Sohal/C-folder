#include<stdio.h>

void goodmorning(int n){
    if(n==0){
        printf("base case reached\n");
        return;
    }

    printf("%d - Good morning\n",n);
    goodmorning(n-1);
    printf("Cuurrent - %d\n",n);
    return;
}





int main(){
    int n;
    printf("enter th enumber = ");
    scanf("%d",&n);
    goodmorning(n);
    return 0;
}