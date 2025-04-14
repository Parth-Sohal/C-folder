#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[6] = {2, 4, 8, 6, 10, 10};

    int max = arr[0];

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("maximum  == %d\n", max);

    int secondLargest = INT_MIN;

    for(int i = 0;i < 6; i++){
        if(arr[i]>secondLargest && arr[i]!=max){
            secondLargest = arr[i];
        }
    }

    printf("%d",secondLargest);
    return 0;
}