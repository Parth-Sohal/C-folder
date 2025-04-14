#include<stdio.h>
#include<math.h>
#include<string.h>
void num(char* str,int n){
    if(n==1){
        strcpy(str,"One");
    }
    else if(n==2){
        strcpy(str,"Two");
    }
    else if(n==3){
        strcpy(str,"Three");
    }
    else if(n==4){
        strcpy(str,"Four");
    }
    else if(n==5){
        strcpy(str,"Five");
    }
    else if(n==6){
        strcpy(str,"Six");
    }
    else if(n==7){
        strcpy(str,"Seven");
    }
    else if(n==8){
        strcpy(str,"Eight");
    }
    else if(n==9){
        strcpy(str,"Nine");
    }
}

int main(int argc, char const *argv[])
{
    char str[10]= "zero";
    for(int i = 8 ;i<=11;i++){
        if(i<10){
            num(str,i);
            printf("%s\n",str);
        }
        else{
            if(i%2==0){
                puts("Even");
            }
            else{
                puts("Odd");
            }
        }
    }
    return 0;
}