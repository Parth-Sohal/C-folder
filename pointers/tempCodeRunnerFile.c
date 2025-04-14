#include<stdio.h>

int chnaging(int* a){
    *a = 25;
    return *a;
}


int main(){
    int x = 5;
    printf("%d\n",&x);
    int y = chnaging(&x);
    printf("%d",y);
    return 0;
}