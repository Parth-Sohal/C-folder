#include <stdio.h>

int main()
{

    int arr[6] = {1,3,4,4,6,2};

    int max = arr[0];

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("maximum  == %d\n", max);

    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }

    printf("%d\n", count);

    int new_arr[6 - count];

    int a = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == max)
        {
            continue;
        }
        else
        {
            new_arr[a] = arr[i];
            a++;
        }
    }

    for (int i = 0; i < 6 - count; i++)
    {
        printf("%d ", arr[i]);
    }
    max = new_arr[0];

    for (int i = 0; i < 6 - count; i++)
    {
        if (new_arr[i] > max)
        {
            max = new_arr[i];
        }
    }

    printf("\n%d", max);

    return 0;
}