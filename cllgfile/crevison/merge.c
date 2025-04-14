#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr1[] = {1,2,3};
    int arr2[] = {4,5,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int rez[size1 + size2];
    for(int i = 0 ; i < size1+size2 ; i++){
        if(i<size1){
            rez[i] = arr1[i];
        }
        else{
            rez[i] = arr2[i-size1];
        }
    }

    for(int i = 0 ; i < size1+size2 ; i++){
        printf("%d ",rez[i]);
    }

    return 0;
}
