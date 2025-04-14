#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the terms = ");
    scanf("%d",&n);

    int arr[2*n+1];
    arr[0] = 0;
    arr[1] = 1;
    int sum = 0;
    for(int i = 2 ; i <= 2*n ; i++){
        arr[i] = arr[i-1] + arr[i-2];
        if(i%2==0){
            sum+=arr[i];
        }
    }

    printf("%d",sum);

    return 0;
}
