#include<stdio.h>

void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {10,1,45,2,-2};
    for(int i = 0 ; i<5;i++){
        for(int j = 0 ; j<5-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    for(int i = 0 ; i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
