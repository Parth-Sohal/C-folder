#include<stdio.h>
int main(){
    //absolute value
    int num;
    printf("enter your number = ");
    scanf("%d",&num);
    if(num>=0){
        printf("absolute value of %d if %d",num,num);
    }
    else{
        printf("absolute value of %d if %d",num,-num);
    }
    return 0;
}