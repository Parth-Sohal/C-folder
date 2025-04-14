#include <stdio.h>
int main(int argc, char const *argv[])
{

    int arr1[2][2] = {1, 2, 3, 4};
    int arr2[2][2] = {4, 5, 6, 7};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr1[i][j] +=  arr2[i][j];
        }
    }
    int sum = 0 ;
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0 ; j<2;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for(int j = 0 ; j<2;j++){
            sum+=arr1[i][j];
        }
        // printf("\n");
    }
    printf("%d",sum);
    return 0;
}
