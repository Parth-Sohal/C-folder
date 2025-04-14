#include<stdio.h>

void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(int argc, char const *argv[])
{
    int arr[6] = {5,-1,3,-2,7,-4};
    for(int i = 0 ; i<6;i++){
        for(int j = 0 ; j<6-i-1;j++){
            if(arr[j]>0&&arr[j+1]<0){
                swap(&arr[j],&arr[j+1]);
            }
            else if(arr[j]<0 && arr[j+1]<0){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    for(int i = 0 ; i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
