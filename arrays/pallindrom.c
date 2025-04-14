#include <stdio.h>
#include <limits.h>

int pallindrom(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
            return 0;
    }
    return 1;
}

int main()
{

    int arr[3] = {1, 2, 2};

    printf("%d", pallindrom(arr, 3));

    return 0;
}