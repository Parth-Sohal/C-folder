#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,columns ; 
    printf("Enter the number of students = ");
    scanf("%d",&rows);
    printf("Enter the number of subject = ");
    scanf("%d",&columns);
    int arr[rows][columns];
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ;j<columns ;j++){
            printf("Enter the marks of %d student in %d subject = ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0 ; i < rows ;i++){
        for(int j = 0;j<columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
