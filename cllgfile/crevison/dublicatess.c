#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 2, 3, 4, 5, 6, 7, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int new_arr[n];
    new_arr[0] = arr[0];
    int x = 0;
    int m = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == new_arr[x])
            continue;
        else
        {
            x++;
            new_arr[x] = arr[i];
            m++;
        }
    }
    // int m = sizeof(new_arr) / sizeof(new_arr[0]);
    for (int i = 0; i < m; i++)
    {
        printf("%d ",new_arr[i]);
    }
    return 0;
}
