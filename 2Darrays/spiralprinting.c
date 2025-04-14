#include<stdio.h>

int main(int argc, char const *argv[])
{
    // int rows, columns;
    // printf("Enter row = ");
    // scanf("%d", &rows);
    // printf("Enter col =  ");
    // scanf("%d", &columns);
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         // printf("Enter the marks of %d student in %d subject = ", i + 1, j + 1);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         // printf("Enter the marks of %d student in %d subject = ", i + 1, j + 1);
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    int currentPosI = 0;
    int currentPosJ = 0;
    int cornerPosI = 0;
    int cornerPosJ = 3;
    

     while (1){
        for(currentPosJ ; currentPosJ<=cornerPosJ ; currentPosJ++){
            printf("%d ",arr[currentPosI][currentPosJ]);
            cornerPosI++;
        }
        currentPosJ--,cornerPosI--;
        printf("\n");
        for(currentPosI+=1; currentPosI<=cornerPosI;currentPosI++){
            printf("%d ",arr[currentPosI][currentPosJ]);
            cornerPosJ--;
        }
        currentPosI--;
        // printf("\n%d %d",currentPosI,currentPosJ);
        // printf("\n%d %d\n",cornerPosI,cornerPosJ);

        for(currentPosJ-=1;currentPosJ>=cornerPosJ;currentPosJ--){
            printf("%d ",arr[currentPosI][currentPosJ]);
            cornerPosI--;
        }
        currentPosJ++,cornerPosI++;
        // printf("\n%d %d",currentPosI,currentPosJ);
        // printf("\n%d %d\n",cornerPosI,cornerPosJ);

        for(currentPosI-=1;currentPosI>=cornerPosI;currentPosI--){
            printf("%d ",arr[currentPosI][currentPosJ]);
            cornerPosJ++;
        }
        currentPosI++;
        // printf("\n%d %d",currentPosI,currentPosJ);
        // printf("\n%d %d\n",cornerPosI,cornerPosJ);

        break;
    }



    return 0;
}
