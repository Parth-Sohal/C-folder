#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter number of rows = ");
    scanf("%d",&num);
    int mid_term = (num/2)+1;
    for(int i=1;i<=num;i++){
        int spaces = abs(mid_term-i);
        int star = num - 2* spaces;
        for(int _ = 1;_<=spaces;_++){
            printf(" ");
        }
        for(int k = 1;k<=star;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}