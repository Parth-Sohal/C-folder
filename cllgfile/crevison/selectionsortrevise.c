#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int min(int arr[], int j)
{
    int min = arr[j];
    int index = j;
    for (int i = j+1; i < 5; i++)
    {
        if (arr[i] > min)
        {
            min = arr[i];
            index = i;
        }
    }
    return index;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {64, 12, 22, 25, 11};
    for (int i = 0; i < 5; i++)
    {
        int smallestIndex = min(arr, i);
        swap(&arr[i], &arr[smallestIndex]);

        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    // for(int i = 0 ; i<5;i++){
    //     printf("%d ",arr[i]);
    // }

    return 0;
}
