#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d",&num);
    int n =  num ; 
    printf("%p\n%p\n",&num,&n);
    int count = 0;
    while(num!=0){
        count++;
        num = num / 10;
    }
    printf("%d\n",count);
    int pow1 = 0;
    num = n;
    while(num!=0){
        pow1 += pow(num%10,count);
        num = num/10;
    }
    if(pow1 == n){
        printf("True");
    }
    else{
        printf("false");
    }
    return 0;
}
