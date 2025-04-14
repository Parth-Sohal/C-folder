#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[15];

    scanf("%[^\n]s", str);

    int lenght = strlen(str);

    for (int i = 0, j = lenght-1; i < j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts(str);
    
    return 0;
}
