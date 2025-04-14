#include <stdio.h>
#include <limits.h>

void reverse(int arr[], int start , int end)
{
    int temp ;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reversek(int arr[], int n, int k)
{
    k = k % n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reversek(arr, 5, 2);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}