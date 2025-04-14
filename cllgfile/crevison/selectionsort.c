#include<stdio.h>
#include<limits.h>
int min(int arr[] , int start ,int end){
    int min = arr[start];
    int index = 0;
    for (int i = start; i < end; i++)
    {
        if(min>arr[i]){
            min = arr[i];
            index = i;
        }
    }
    return index;
    
}

void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


int main(int argc, char const *argv[])
{
    int arr[] = {64,25,12,22,11};
    for(int i = 0 ; i<5;i++){
        int mon = min(arr,i,5);
        printf("%d\n",mon);

        if(mon!=0) swap(&arr[i],&arr[mon]);

        for(int j = 0 ;j < 5;j++){
        printf("%d ",arr[j]);
        }
        printf("\n");

    }

    
    return 0;
}
