#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int rows, columns;
    printf("Enter the number of students = ");
    scanf("%d", &rows);
    printf("Enter the number of subject = ");
    scanf("%d", &columns);
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            // printf("Enter the marks of %d student in %d subject = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            // printf("Enter the marks of %d student in %d subject = ", i + 1, j + 1);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    int arrTr[columns][rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arrTr[j][i] = arr[i][j];
        }
    }
    printf("\n");

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            // printf("Enter the marks of %d student in %d subject = ", i + 1, j + 1);
            printf("%d ", arrTr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
