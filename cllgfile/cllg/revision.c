#include<stdio.h>

int decimal(int n){
    printf("%d\n ",n);
    if(n==0 || n==1){
        return n;
    }

    return  decimal(n/2)*10 + n%2 ;
   
}


void reverse(int arr[],int n,int i){
    if(i>=n/2){
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    reverse(arr,n,i+1);
}
int main(){
    // int n = 7;
    // int ans = decimal(10,0);
    // printf("%d",ans);
    // printf("%d",fibbo(10));
    int arr[] = {1,2,3,4,5};
    reverse(arr,5,0);
    for(int i = 0 ; i < 4 ; i++){
        printf("%d ",arr[i]);
    }
}