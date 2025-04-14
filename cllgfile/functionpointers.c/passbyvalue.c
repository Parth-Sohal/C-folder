#include<stdio.h>
void change(int *a){// o change this we use pointers
 //\ we change using \\ \//
    *a = 10;
    return;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    change(&a);
    printf("%d",a);
    return 0;
}

