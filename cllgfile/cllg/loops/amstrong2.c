#include<stdio.h>
#include<math.h>
int main()
{
    printf("The amstrong numbers are -> \n");
    int temp,count=0,lastdigit,sum;


    for(int i=1;i<=500;i++){
        temp = i;
        count = 0;
        sum = 0;
        //count the number of digits
        while(temp!=0){
            temp=temp/10;
            count=count+1;
        }

        // printf("%d %d ",count , i);

        temp = i;
        // printf("%d ",temp);

        while (temp!=0)
        {
            lastdigit = temp%10;
            sum += pow(lastdigit,count);
            temp = temp/10;
        }
        // printf("%d\n",sum);

        if(i == sum){
            printf("%d -> %d\n",count,sum);
        }
    }
    return 0;
}