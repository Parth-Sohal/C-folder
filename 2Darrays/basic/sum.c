#include<stdio.h>
int main(){
    float num;
    printf("Enter your number = ");
    scanf("%f",&num);
    float fc = num - (int)num;
    printf("%.3f",fc);
    return 0;
}