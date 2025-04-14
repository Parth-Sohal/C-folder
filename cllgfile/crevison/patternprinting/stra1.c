// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("enter number of rows = ");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= rows+1-i; j++)
//         {
//             printf(" %d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("enter number of rows = ");
//     scanf("%d", &rows);
//     for(int i=1;i<=rows;i++){
//         int a = 1;
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             a+=2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int rows;
    printf("enter number of rows = ");
    scanf("%d", &rows);
    for(int i=1;i<=rows;i++){
        int a = 1;
        for(int j=1;j<=(2*rows)-1;j+=2){
            printf("%d",j);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}