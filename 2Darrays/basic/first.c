#include<stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>18){
        printf("congo");
    }
    else if (age<10)
    {
        printf("no");
    }    
    return 0;
}