#include<stdio.h>
int main(){
    int num,mod;
    int count = 0;
    scanf("%d",&num);
    while(num!=0){
        mod = num%10;
        count+=1;
        num = num/10;
        // printf("%d\n",num);
    }
    printf("%d\n",count);
    return 0;
}