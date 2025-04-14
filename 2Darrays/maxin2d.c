#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int rows, colums;
    
    printf("Enter the number of rows and columns you want = ");
    scanf("%d%d", &rows, &colums);

    int arr[rows][colums];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int max = INT_MIN;
    int secondMax  = INT_MIN;
    // int indexI = 0;
    // int indexJ = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            if (arr[i][j] > max)
            {
                secondMax = max;
                max = arr[i][j];
                
            }
            else if(arr[i][j]>secondMax && arr[i][j]!=max){
                secondMax = arr[i][j];
            }
        }
    }

    printf("%d %d", max,secondMax);
    // printf(" %d %d",indexI,indexJ);

    return 0;
}