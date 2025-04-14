#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number ;
    printf("Enter the number of student = ");
    scanf("%d",&number);

    int arr[number];

    for(int i = 0 ; i < number ; i++){
        printf("Enter the %d student marks = ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ;i < number ;i++){
        if(arr[i] < 35){
            printf("%d - %d\n",i,i+1);
        }
    }
 
    return 0;
}
