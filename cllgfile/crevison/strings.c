#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str1[20] = "hello";
    int lenght1 = strlen(str1);
    char str2[] = "world";
    // for(int i = lenght1-1;i<)
    
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
