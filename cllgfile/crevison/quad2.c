#include<stdio.h>
#include<math.h>
void roots(int a , int b,int c){
    int discriminat;
    discriminat = (b*b) - (4*a*c);
    if(discriminat<0){
        printf("no real roots");
        return;
    }
    else if(discriminat == 0){
        int root;
        printf("equal roots");
        root = -(b)/(2*a);
        printf("The roots are %d %d",root , root);
        return;
    }
    else{
        int root1,root2;
        printf("distincit root");
        root1 = -((b)+sqrt(discriminat))/(2*a);
        root2 = -((b)-sqrt(discriminat))/(2*a);
        printf("The roots are %d %d",root1 , root2);
        return;
    }
}

int main(int argc, char const *argv[])
{
    int a, b , c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    roots(a,b,c);
    return 0;
}
