#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int sum = 1;
    for(int i=1;i<=number;i++){
        sum = sum*i;
    }
    printf("%d",sum);
    return 0;
}