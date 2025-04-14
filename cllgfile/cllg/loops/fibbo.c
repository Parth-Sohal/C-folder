#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int firstNumber = 1;
    int secondNumber = 1;
    printf("%d %d ",firstNumber,secondNumber);
    int thirdnumber = 1;
    for(int i=3;i<=n;i++){
        thirdnumber = firstNumber+secondNumber;
        printf("%d ",thirdnumber);
        firstNumber = secondNumber;
        secondNumber = thirdnumber;
    }
    printf("%d",thirdnumber);

    return 0;
}