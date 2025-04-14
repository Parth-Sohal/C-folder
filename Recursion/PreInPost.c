#include <stdio.h>

void PreInPost(int num)
{
    if (num == 0)
        return;
    printf("%d", num);
    PreInPost(num - 1);
    printf("%d", num);
    PreInPost(num - 1);
    printf("%d", num);
    return;
}

int main(int argc, char const *argv[])
{
    PreInPost(3);
    return 0;
}
