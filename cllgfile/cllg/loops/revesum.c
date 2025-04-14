#include<stdio.h>
int main(){
    int number;
    printf("enter your number = ");
    scanf("%d",&number);
    int storedNumber = number;
    int lastDigit, reverse = 0;
    while(number!=0){
        lastDigit = number%10;
        reverse = (reverse * 10)+lastDigit;
        number = number/10;
    }
    // printf("%d")
    int sumOfDigits = storedNumber + reverse;
    printf("The reversed number = %d",sumOfDigits);
    return 0;
}