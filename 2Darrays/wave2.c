#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int rows, columns;
    printf("Enter row = ");
    scanf("%d", &rows);
    printf("Enter col =  ");
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
    printf("\n");
    
    for(int i = rows-1 ; i>=0;i--){
        if(i%2==0){
            for(int j = 0 ; j<columns;j++){
                printf("%d ",arr[j][i]);
            }
        }
        else{
            for(int j = columns-1;j>-1;j--){
                printf("%d ",arr[j][i] );
            }
        }
        printf("\n");
    }
    

    return 0;
}
