#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int arr[4] = {1,2,3,5};
    int sum = 0;
    for(int i = 0;i<4;i++){
        sum+=arr[i];
    }

    int missing = (1+2+3+4+5) - sum;

    printf("%d",missing);


    return 0;
}
