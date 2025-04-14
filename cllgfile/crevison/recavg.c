#include<stdio.h>
#include<limits.h>
void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2,5,3,6};
    for(int i = 0 ; i < 4 ; i++){
        for(int j = i+1 ; j<4;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
                i++;
            }
        }
    }
    for(int i = 0 ;i < 4;i++){
        printf("%d ",arr[i]);

    }

    return 0;
}
