#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[4] = {1, 2, 3, 5};

    // for (int i = 0; i < 4; i++)
    // {
    //     if (x == arr[i])
    //     {
    //         printf("%d", i);
    //     }
    // }
    int flag = 1;
    for(int i = 1 ; i<=5;i++){
        flag = 1;
        for(int j = 0 ; j <  4;j++){
            if(i == arr[j]){
                flag = 0;
            }
        }
        if(flag == 1){
            printf("%d",i);
        }
    }



    return 0;
}
