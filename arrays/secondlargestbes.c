#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[6] = {3, 5, 8, 9, 10, 10};

    int max = INT_MIN;
    int secondmax = INT_MIN;

    for (int i = 0; i < 6; i++){// 0 1 2 3 4 5
        if (arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }

        else if (arr[i] > secondmax && arr[i] != max)
        {
            secondmax = arr[i];
        }
    }

    printf("%d", secondmax);

    return 0;
}