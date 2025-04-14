#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter your 3 number = ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("a is the greates");
        }
        else{
            printf("c is the greatest");
        }
    }
    else if(b>a){
        if(b>c){
            printf("b is the greates");
        }
        else{
            printf("c is the greatest");
        }
    }

    return 0;
}