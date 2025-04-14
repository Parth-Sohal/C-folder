#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 3; i++)
    {
        int firstNum = 1;
        // printf("%d ",firstNum);
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", firstNum);
            firstNum = firstNum * (i - j) / (j + 1); // Update to next number
        }
        printf("\n");
    }

    return 0;
}
