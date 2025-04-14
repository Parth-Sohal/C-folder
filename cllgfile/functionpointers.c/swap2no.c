#include<stdio.h>

void swap(int* ptr1,int* ptr2){
    int third_var = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = third_var;
}





int main(int argc, char const *argv[])
{

    int firstNumber , secoundNum;
    printf("Enter your frst number = ");
    scanf("%d",&firstNumber);
    printf("Enter yours  second number = ");
    scanf("%d",&secoundNum);

    swap(&firstNumber,&secoundNum);

    printf("firstnumber = %d\nsecondnumber = %d",firstNumber,secoundNum);
    return 0;
}
