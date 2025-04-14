#include<stdio.h>
#include<string.h>
int main() 
{
    char arr[] = "Hello World";
    arr[2]  = 97;//aasciii value treat kaar raha thai char change hop jayigi
    int i = 0;
    while(arr[i]!='\0'){
       printf("%c",arr[i]); 
       i++;
    }
    return 0;    
}