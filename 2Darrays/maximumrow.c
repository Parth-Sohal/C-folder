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
    int max_row = INT_MIN;
    int row_number = -1,sum;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum+=arr[i][j];
        }
        if(sum>max_row){
            max_row = sum;
            row_number = i;
        }
    }


    printf("%d %d",max_row,row_number);
    return 0;
}
