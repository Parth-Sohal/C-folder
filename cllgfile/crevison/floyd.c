#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch ;
    scanf("%c",&ch);
    
    char s[100] ;
    scanf(" %[^\n]s",s);
      
    char sen[100];
    scanf(" %[^\n]s",sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen);
    return 0;
}