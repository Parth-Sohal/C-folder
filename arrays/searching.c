#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int arr[6] = {-34,-8,-21,-78,-9,-12};

    int max = arr[0];

    for(int i = 1 ; i < 6 ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("%d",max);

    return 0;
}
 