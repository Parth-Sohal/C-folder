#include<stdio.h>
#include<stdbool.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {1,3,2,1,3};
    for(int i = 0 ; i<5;i++){
    int flag = 0 ;//off;
        for(int j = 0 ;j<5 ;j++){
            if(arr[i] == arr[j] && i!=j){
                flag = 1;
                break;
                // printf("%d - %d\n",i,j);
            }
        }
        if(!flag){
            printf("%d the non dublicate ",arr[i]);
        }

    }
    
    return 0;
}
