#include<stdio.h>

void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main(int argc, char const *argv[])
{
    int rows,columns;
    printf("Enter the number of rows and columns = ");
    scanf("%d%d",&rows,&columns);
    int arr[rows][columns];

    for(int i = 0 ; i<rows;i++){
        for(int j = 0 ;j<columns;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0 ; i<rows;i++){
        for(int j = i+1 ; j<columns;j++){
            swap(&arr[i][j],&arr[j][i]);
        }
    }

    for(int i = 0 ; i<rows;i++){
        for(int j = 0 ;j<columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i  = 0 ; i<rows;i++){
        for(int j = 0 , k = columns-1 ; j<k;j++,k--){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }

    for(int i = 0 ; i<rows;i++){
        for(int j = 0 ;j<columns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}