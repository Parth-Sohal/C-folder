#include <stdio.h>
#include <limits.h>

void reverse(int* n1,int* n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};


    for (int i = 0; i < 5/2; i++)
    {
        reverse(&arr[i],&arr[4-i]);
    }


    for(int i =0 ; i< 5 ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}