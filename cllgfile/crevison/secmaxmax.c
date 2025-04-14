#include<stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int arr[6] = {1,3,5,-19,34,9};
    int n  = sizeof(arr)/sizeof(arr[0]);
    printf("%d",n);
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0 ; i < 6; i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=max){
            secondMax = arr[i];
        }
    }
    printf("%d %d",max,secondMax);
    return 0;
}
