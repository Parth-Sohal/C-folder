#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    int newArr[5];

    for (int i = 0; i < 5; i++)
    {
        newArr[i] = arr[4-i];
    }


    for(int i  =0 ; i< 5 ; i++){
        printf("%d ",newArr[i]);
    }

    return 0;
}