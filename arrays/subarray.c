#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter th etotal number of therms = ");
    scanf("%d",&n);

    int arr[n];

    int sum ;
    printf("Enter the sum you want = ");
    scanf("%d",&sum);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Elemment = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum){
                printf("\n{%d,%d}",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
