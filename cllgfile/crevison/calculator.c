#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2;
    char op;
    scanf("%d %d",&num1,&num2);
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        printf("%d",num1+num2);
        break;
    case '-':
        printf("%d",num1-num2);
        break;
    case '*':
        printf("%d",num1*num2);
        break;
    default:
        printf("%d",num1/num2);
        break;
    }
    return 0;
}
