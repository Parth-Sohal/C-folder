#include<stdio.h>

void england(){
    printf("You are in england\n");
    return ;
}
void ausi(){
    printf("You are in ausii\n");
    england();
    return;
}
void india(){
    printf("youy are in India\n");
    ausi();
    return;
}

int main(){
    india();
    return 0;
}