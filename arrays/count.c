#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 12)
            count += 1;
    }

    printf("%d",count);
    return 0;
}
