#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int space = 0 ;
    int num = 1+(n-1)*2;
    for(int i = 0 ; i<1+(n-1)*2 ; i++){
        for(int k = 0 ; k<=space;k++){
            printf(" ");
        }
        for(int j = 1;j<=num;j++){
            printf("%d",j);
        }
        if(i<n-1) space++,num-=2;
        else space--,num+=2;
        printf("\n");
    }
    return 0;
}
