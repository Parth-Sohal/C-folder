#include <stdio.h>
int main(int argc, char const *argv[])
{
    int row1, col1, row2, col2;
    printf("Enter the row and column of matrix 1 = ");
    scanf("%d%d", &row1, &col1);
    printf("Enter the row and col of matrix 2 = ");
    scanf("%d%d", &row2, &col2);
    int arr1[row1][col1];
    int arr2[row2][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int result[row1][col2];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][i];
            }
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
