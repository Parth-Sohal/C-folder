#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        int comb = 1;
        for(int j = 0 ; j<i;j++){
            printf("%d",comb);
            comb = comb * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
