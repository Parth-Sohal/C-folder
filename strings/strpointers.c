#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[] = "hello";
    char s2[10];
    strcpy(s2,s1);
    s1[0] = 'p';
    printf("%s %s",s2,s1);
    return 0;
}