#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[][3] = {1,2,3,
                    4,5,6,
                    7,8,9};
    int totalsum = 0;
    for(int i = 0 ; i < 3 ; i++) 
    {
        int num;
        if(i%2==0) num = i;
        else num = -i;
        int mult1 = 1 , mult2 = 1;
        for(int j = 0; j<3;j++){
            if(j==i) continue;
            for(int k = 0 ; k<3;k++){
                if(k==i) continue;
                if(j==k){
                    mult1*=arr[j][k];
                }
                else{
                    mult2*=arr[j][k];
                }
            }
            totalsum += num*(mult1 - mult2);
        }
        
    }

    printf("%d ",totalsum);
    return 0;
}
