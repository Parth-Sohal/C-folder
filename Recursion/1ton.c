#include<stdio.h>

void increasing(int n){
   if(n==0){
    printf("base case reached\n\n");
    return ;
   }
   printf("Current here - (%d)\n",n);
   increasing(n-1);
   printf("here -- %d\n\n",n);
   return ;
}





int main(){
    int n;
    printf("enter th enumber = ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}