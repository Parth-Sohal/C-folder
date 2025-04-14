#include<stdio.h>

void swap(int *a,int *b){
    int third_number = *a;
    *a = *b;
    *b = third_number;
    return;
}




int main(int argc, char const *argv[])
{
    int a , b;
    printf("Enter your frst number = ");
    scanf("%d",&a);
    printf("Enter yours  second number = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("firstnumber = %d\nsecondnumber = %d",a,b);

    return 0;
}
