#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number ;
    printf("Enter the number of student = ");
    scanf("%d",&number);

    int arr[number];

    for(int i = 0 ; i < number ; i++){
        printf("Enter the %d student marks = ",i+1);
        scanf("%d",&arr[i]);
    }

    int sum  = 0;

    for(int i = 0 ; i < number ; i++) {
        sum += arr[i];
    }

    printf("%d",sum);


    return 0;
}
