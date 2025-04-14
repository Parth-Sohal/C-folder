#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter number of rows = ");
    scanf("%d",&n);
    int traingle2 = 5;
    int spaces =1;
    for(int i = 1;i<=n;i++){
        int traingle1 = 1;
        
        int sam = traingle2;
        for(int j = 1;j<=n-i+1;j++){
            printf("%d",traingle1);
            traingle1++;
        }
        for(int j = 1;j<=spaces;j++){
            printf(" ");
        }
        for(int j = 1;j<=n-i+1;j++){
            printf("%d",sam);
            sam++;
        }
        printf("\n");
        traingle2+=1;
        spaces+=2;

    }
    return 0;
}