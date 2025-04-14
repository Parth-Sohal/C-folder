#include<stdio.h>
int main(){
    int num;
    printf("enter number of rows = ");
    scanf("%d",&num);
    int mid_term = (num/2)+1;
    int spaces = (num/2);
    int star = 1;
    for(int i=1;i<=num;i++){
        for(int _ = 1;_<=spaces;_++){
            printf(" ");
        }
        for(int k = 1;k<=star;k++){
            printf("*");
        }
        if(i<mid_term){
            spaces--;
            star+=2;
        }
        else{
            spaces++;
            star-=2;
        }
        printf("\n");
    }
    return 0;
}