#include<stdio.h>
void num(int n){
    if(n==0){//base case
        return;
    }
    printf("the number being called \n%d\n",n);//3 2 1
    num(n-1);
    printf("%d\n",n);
    return;

}
int main(){
    int n;
    printf("enter th enumber = ");
    scanf("%d",&n);
    num(n);
    return 0;
}