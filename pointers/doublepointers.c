#include<stdio.h>
int main(int argc, char const *argv[])
{
    int my_num = 5;
    int* ptr = &my_num;
    int** address_of_pointer = &ptr;
    printf("%d\n",my_num);
    printf("%p\n",&my_num);
    printf("%p\n",ptr);
    printf("%d\n",ptr);
    printf("%p\n",address_of_pointer);
    printf("%d\n",**address_of_pointer);
    return 0;
}
