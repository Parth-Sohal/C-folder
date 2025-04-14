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
    int count = 0;
    int row_number = -1,ones = -1;
    for (int i = 0; i < rows; i++)
    {
        count  = 0;
        for (int j = 0; j < columns; j++)
        {
            if(arr[i][j]==1){
                count+=1;
            }
        }
        if(count>ones){
            ones = count;
            row_number = i;
        }
    }


    printf("%d %d",ones,row_number);
    return 0;
}
