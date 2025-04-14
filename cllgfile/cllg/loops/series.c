#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int sum = 0;
    for(int i = 1;i<=number;i++){
        if (i%2!=0)
            sum+=i;
        else
            sum-=i; 
    }
    printf("%d",sum);
    return 0;
}