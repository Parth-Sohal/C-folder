#include <stdio.h>
#include <math.h>

// Function to check Prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to check Armstrong
int isArmstrong(int num) {
    int count = 0 ;
    int temp  = num;
    while(num){
        count++;
        num = num / 10;
    }
    num = temp;
    int sum = 0;
    while(num){
        int mod = num%10;
        sum += pow(mod,count);
        num = num / 10;
    }
    // printf("%d ",sum);
    if(temp == sum){
        return 1;
    }
    return 0;
}

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check Prime
    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    // Check Armstrong
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    // Check Perfect
    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}
